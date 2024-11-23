/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:26:37 by agamay            #+#    #+#             */
/*   Updated: 2024/10/17 13:37:20 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int needl)
{
	int	i;

	i = 0;
	needl = needl % 128;
	while (src[i])
	{
		if (src[i] == needl)
			return ((char *)&src[i]);
		i++;
	}
	if (needl == '\0')
		return ((char *)&src[i]);
	return (NULL);
}
