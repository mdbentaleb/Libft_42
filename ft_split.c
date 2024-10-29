/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:57:39 by moben-ta          #+#    #+#             */
/*   Updated: 2024/10/29 19:52:54 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>

int	count_words(char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

5
char	**ft_split(char const *s, char c)
{
	char	**tmp;
	int	i;
	int	wdcount;

	wdcount = count_words(s);
	tmp = (char *)malloc(sizeof(char **) * wdcount + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
	}
}