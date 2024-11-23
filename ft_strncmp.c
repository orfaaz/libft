/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:59:47 by agamay            #+#    #+#             */
/*   Updated: 2024/10/18 16:30:02 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *dest, const char *src, size_t size)
{
	if (!(src || dest) || !size)
		return (0);
	while (*src == *dest && *dest && size > 1)
	{
		src++;
		dest++;
		size--;
	}
	return (*(unsigned char *)dest - *(unsigned char *)src);
}
