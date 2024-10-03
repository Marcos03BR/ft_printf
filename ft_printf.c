/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:58:48 by mbarranq          #+#    #+#             */
/*   Updated: 2024/10/03 18:38:29 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static void	ft_format(int i, const char *format, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_format(i, format, args);
		}
		else
		{
			ft_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}

static void	ft_format(int i, const char *format, va_list args)
{
	if (format[i] == 'c')
		ft_putchar(va_arg(args, int));
	else if (format[i] == 's')
		ft_putstr(va_arg(args, char *));
	else if (format[i] == 'p')
		ft_putnbr(va_arg(args, int));
/*	else if (format[i] == 'd')
		ft_puthex(va_arg(args, unsigned int));
	else if (format[i] == 'i')
		ft_puthex(va_arg(args, unsigned int));
	else if (format[i] == 'u')
		ft_putptr(va_arg(args, void *));*/
	else if (format[i] == 'x')
		ft_putchar('%');
	else if (format[i] == 'X')
		ft_putchar('%');
	else if (format[i] == '%')
		ft_putchar('%');
}
