/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:04:53 by agamay            #+#    #+#             */
/*   Updated: 2024/10/13 17:40:26 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*dest;
	unsigned char	*ret;

	size = nmemb * size;
	dest = malloc(size);
	if (!dest)
		return (NULL);
	ret = dest;
	while (size--)
		*dest++ = '\0';
	return ((void *)ret);
}
