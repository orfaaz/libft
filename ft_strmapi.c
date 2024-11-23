/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 22:28:23 by agamay            #+#    #+#             */
/*   Updated: 2024/10/17 13:42:28 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	int				size;
	char			*dest;
	char			*temp;
	unsigned int	i;

	if (!(str && f))
		return (NULL);
	size = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * size + 1);
	if (!dest)
		return (NULL);
	temp = dest;
	i = 0;
	while (*str)
	{
		*temp = f(i, *str);
		i++;
		temp++;
		str++;
	}
	*temp = '\0';
	return (dest);
}
