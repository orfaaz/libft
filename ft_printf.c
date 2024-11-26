/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:18:40 by agamay            #+#    #+#             */
/*   Updated: 2024/10/31 17:37:33 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

static int	ft_putnbr_unsigned(size_t nbr, size_t base, int shift, int ptr)
{
	int	mag;

	mag = 0;
	if (ptr && !nbr)
		return (ft_putstr_int("(nil)", 1));
	else if (ptr)
	{
		mag = 2;
		write(1, "0x", 2);
	}
	if (nbr > base - 1)
	{
		mag = mag + ft_putnbr_unsigned(nbr / base, base, shift, 0);
		if ((nbr % base) > 9)
			mag = mag + ft_putchar_int(nbr % base + shift, 1);
		else
			mag = mag + ft_putchar_int(nbr % base + '0', 1);
	}
	else
	{
		if (nbr > 9)
			nbr = nbr + shift - 48;
		mag = mag + ft_putchar_int(nbr + '0', 1);
	}
	return (mag);
}

static int	conv_spec(int c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_int(va_arg(args, int), 1));
	if (c == 's')
		return (ft_putstr_int(va_arg(args, char *), 1));
	if (c == 'p')
		return (ft_putnbr_unsigned((size_t)va_arg(args, size_t), 16, 87, 1));
	if ((c == 'd') || (c == 'i'))
		return (ft_putnbr_int(va_arg(args, int)));
	if (c == 'u')
		return (ft_putnbr_unsigned((unsigned int)va_arg(args, int), 10, 48, 0));
	if (c == 'x')
		return (ft_putnbr_unsigned((unsigned int)va_arg(args, int), 16, 87, 0));
	if (c == 'X')
		return (ft_putnbr_unsigned((unsigned int)va_arg(args, int), 16, 55, 0));
	if (c == '%')
		return (ft_putchar_int('%', 1));
	write(1, "%", 1);
	return (ft_putchar_int(c, 1) + 1);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
			format++;
		}
		else
		{
			format++;
			count = count + conv_spec(*format++, args);
		}
	}
	va_end(args);
	return (count);
}
