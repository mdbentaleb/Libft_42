/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:57:39 by moben-ta          #+#    #+#             */
/*   Updated: 2024/11/06 13:25:17 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	count_words(char const *s, char c)
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

static char	**my_free(char **tmp, int j)
{
	while (j--)
	{
		free(tmp[j]);
	}
	free(tmp);
	return (NULL);
}

static char	**test(char **tmp, const char *s, char c, int wd_count)
{
	int		i;
	int		j;
	int		start;

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
		if (!tmp[j])
			return (my_free(tmp, j));
		j++;
	}
	tmp[j] = NULL;
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	int		count_wd;
	char	**tmp;

	if (!s)
		return (NULL);
	count_wd = count_words(s, c); 
	tmp = (char **)malloc(sizeof(char *) * (count_wd + 1));
	if (!tmp)
		return (NULL);
	return (test(tmp, s, c, count_wd));
}
