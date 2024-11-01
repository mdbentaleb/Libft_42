/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 09:50:00 by moben-ta          #+#    #+#             */
/*   Updated: 2024/11/01 10:21:09 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "./libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_toupper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}


void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

int main()
{
    char s[] = "hello";
	ft_striteri(s, ft_toupper);
    printf("%s\n", s);
}