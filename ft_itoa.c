/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:25:27 by moben-ta          #+#    #+#             */
/*   Updated: 2024/10/31 11:38:27 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	num_len(long nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr < 0)
	{
		nbr_len++;
		nbr *= -1;
	}
	if (nbr == 0)
		nbr_len++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		nbr_len++;
	}
	return (nbr_len);
}


char	*ft_itoa(int n)
{
	int	nbr_len;

	nbr_len = num_len(n);
}