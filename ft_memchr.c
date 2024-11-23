/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:55:29 by agamay            #+#    #+#             */
/*   Updated: 2024/10/14 15:27:50 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *haystack, int needl, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)haystack;
	while (n--)
	{
		if (*temp == (unsigned char)needl)
			return ((void *)temp);
		temp++;
	}
	return (NULL);
}
