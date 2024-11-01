/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:05:18 by moben-ta          #+#    #+#             */
/*   Updated: 2024/11/01 10:25:20 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "./libft.h"



char	ft_toupper(unsigned int i, char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}


size_t ft_strlen(const char *s) { // Add a simple implementation of ft_strlen
    size_t len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*tmp;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	tmp = malloc(sizeof(char) * len + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}


int main()
{
    char s[] = "hello";

    printf("%s\n", ft_strmapi(s, ft_toupper));
}