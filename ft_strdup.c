/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:37:51 by moben-ta          #+#    #+#             */
/*   Updated: 2024/10/28 13:38:20 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *tmp;
    int    len;

    len = ft_strlen (s1);
    tmp = (char *)malloc(sizeof(char) * len + 1);
    if (!tmp)
        return (NULL);
    ft_memmove(tmp, s1, len);
    tmp[len] = '\0';
    return (tmp);
}
