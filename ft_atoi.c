/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:42:32 by agamay            #+#    #+#             */
/*   Updated: 2024/10/14 15:15:02 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace3(const char c)
{
	if ((c >= 9 && c <= 13) || (c == ' '))
		return (1);
	return (0);
}

int	ft_atoi(const char *nbr)
{
	int	sign;
	int	num;

	sign = 0;
	num = 0;
	while (ft_isspace3(*nbr))
		nbr++;
	if (*nbr == '-')
	{
		sign = 1;
		nbr++;
	}
	else if (*nbr == '+')
		nbr++;
	while (*nbr >= '0' && *nbr <= '9')
	{
		num = num * 10 + (*nbr - 48);
		nbr++;
	}
	if (sign == 1)
		return (-num);
	return (num);
}
