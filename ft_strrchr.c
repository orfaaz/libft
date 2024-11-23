/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:57:19 by agamay            #+#    #+#             */
/*   Updated: 2024/10/14 16:51:59 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int needl)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	needl = needl % 128;
	while (src[i])
	{
		if (src[i] == needl)
			j = i;
		i++;
	}
	if (needl == '\0')
		return ((char *)&src[i]);
	if (j != -1)
		return ((char *)&src[j]);
	return (NULL);
}
