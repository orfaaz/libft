/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:19:14 by agamay            #+#    #+#             */
/*   Updated: 2024/11/26 16:19:16 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_int(int nbr)
{
	int	mag;

	mag = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		mag++;
		mag = mag + ft_putnbr_int(-nbr);
	}
	else if (nbr > 9)
	{
		mag = mag + ft_putnbr_int(nbr / 10);
		mag = mag + ft_putchar_int(nbr % 10 + '0', 1);
	}
	else
		mag = mag + ft_putchar_int(nbr + '0', 1);
	return (mag);
}
