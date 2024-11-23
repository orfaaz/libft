/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:50:52 by agamay            #+#    #+#             */
/*   Updated: 2024/10/17 13:31:56 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	int				size;
	unsigned int	i;

	if (!(str && f))
		return ;
	size = ft_strlen(str);
	i = 0;
	while (*str)
	{
		f(i, str);
		i++;
		str++;
	}
}
