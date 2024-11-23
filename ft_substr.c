/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:57:25 by agamay            #+#    #+#             */
/*   Updated: 2024/10/15 11:16:04 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*dest;
	char	*temp;

	if (!str)
		return (NULL);
	if (ft_strlen(str) < start)
		len = 0;
	if (len != 0)
		str = str + start;
	if (ft_strlen(str) < len && len != 0)
		len = ft_strlen(str);
	dest = (char *)ft_calloc(sizeof(char), len + 1);
	if (!dest)
		return (NULL);
	temp = dest;
	while (len--)
		*temp++ = *str++;
	return (dest);
}
