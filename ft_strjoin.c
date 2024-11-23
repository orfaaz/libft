/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:05:12 by agamay            #+#    #+#             */
/*   Updated: 2024/10/17 13:33:03 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*dest;
	char	*temp;
	size_t	size;

	if (!(str1 && str2))
		return (NULL);
	size = ft_strlen(str1) + ft_strlen(str2);
	dest = (char *)malloc(sizeof(char) * size + 1);
	if (!dest)
		return (NULL);
	temp = dest;
	while (*str1)
		*temp++ = *str1++;
	while (*str2)
		*temp++ = *str2++;
	*temp = '\0';
	return (dest);
}
