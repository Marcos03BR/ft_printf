/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:58:48 by mbarranq          #+#    #+#             */
/*   Updated: 2024/10/04 13:43:13 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(const char *format, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		temp_count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[++i])
		{
			temp_count = ft_format(&format[i], args);
			if (temp_count == -1)
				return (-1);
			count += temp_count;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

static int	ft_format(const char *format, va_list args)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
		count += ft_puthex(va_arg(args, unsigned int), *format);
	else if (*format == '%')
		count += ft_putchar('%');
	else
		return (-1);
	return (count);
}
