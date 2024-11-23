/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:58:37 by agamay            #+#    #+#             */
/*   Updated: 2024/10/16 18:46:59 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needl, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(haystack && needl) && !size)
		return (NULL);
	if (needl[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < size)
	{
		while (needl[j] == haystack[i + j] && i + j < size)
		{
			j++;
			if (!needl[j])
				return ((char *)&haystack[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
