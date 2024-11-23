/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:00:26 by agamay            #+#    #+#             */
/*   Updated: 2024/10/17 13:33:29 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!src && !dest)
		return (0);
	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] && size > 0)
	{
		i++;
		size--;
	}
	while (src[j] && size > 1)
	{
		dest[i + j] = src[j];
		j++;
		size--;
	}
	if (j > 0)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
