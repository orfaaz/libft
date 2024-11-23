/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:01:11 by agamay            #+#    #+#             */
/*   Updated: 2024/10/14 16:09:06 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (len >= size && size > 0)
	{
		while (*src && size--)
		{
			*dest = *src;
			if (size == 0)
				*dest = '\0';
			dest++;
			src++;
		}
	}
	else if (size > 0)
	{
		while (*src)
			*dest++ = *src++;
		*dest = '\0';
	}
	return (len);
}
