/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:51:09 by agamay            #+#    #+#             */
/*   Updated: 2024/10/17 13:50:11 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmp(const char *haystack, const char needl)
{
	while (*haystack)
	{
		if (needl == *haystack)
			return (1);
		haystack++;
	}
	return (0);
}

char	*ft_strtrim(const char *str, const char *needl)
{
	char			*dest;
	size_t			len;
	unsigned int	i;

	if (!(str && needl))
		return (NULL);
	i = 0;
	while (ft_cmp(needl, *str) == 1)
		str++;
	len = ft_strlen(str);
	while (ft_cmp(needl, str[len - 1]))
		len--;
	dest = ft_substr(str, 0, len);
	return (dest);
}
