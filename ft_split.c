/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:57:39 by moben-ta          #+#    #+#             */
/*   Updated: 2024/10/30 11:48:23 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		wd_count;
	char	**tmp;

	wd_count = count_words(s, c);
	tmp = (char **)malloc(sizeof(char *) * (wd_count +1));
	if (!tmp)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0' && j < wd_count)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c)
			i++;
		tmp[j] = ft_substr(s, start, i - start);
		j++;
	}
	tmp[j] = NULL;
	return (tmp);
}
