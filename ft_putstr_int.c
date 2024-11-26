/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:18:08 by agamay            #+#    #+#             */
/*   Updated: 2024/11/26 16:18:10 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_int(char *str, int fd)
{
	if (!str || fd < 0)
		return (ft_putstr_int("(null)", 1));
	write(fd, str, ft_strlen(str));
	return ((int)ft_strlen(str));
}
