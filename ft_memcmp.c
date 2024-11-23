/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:55:39 by agamay            #+#    #+#             */
/*   Updated: 2024/10/17 13:26:49 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*stra;
	unsigned char	*strb;

	if (!str1 && !str2)
		return (0);
	stra = (unsigned char *)str1;
	strb = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while ((--n) && (*stra == *strb))
	{
		stra++;
		strb++;
	}
	return (*stra - *strb);
}
