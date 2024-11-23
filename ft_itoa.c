/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:45:49 by agamay            #+#    #+#             */
/*   Updated: 2024/10/18 16:53:26 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_magnitude(int nbr)
{
	size_t	len;

	len = 0;
	if (!nbr)
		return (1);
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static void	ft_fill(char *dest, int nbr, int sign, size_t len)
{
	while (len--)
	{
		dest[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (sign)
		dest[0] = '-';
}

char	*ft_itoa(int nbr)
{
	char	*dest;
	size_t	len;
	int		sign;

	sign = 0;
	if (nbr == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nbr < 0)
	{
		sign = 1;
		nbr = -nbr;
	}
	len = ft_magnitude(nbr) + sign;
	dest = (char *)ft_calloc(sizeof(char), len + 1);
	if (!dest)
		return (NULL);
	ft_fill(dest, nbr, sign, len);
	return (dest);
}
