/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:32:49 by mbarranq          #+#    #+#             */
/*   Updated: 2024/10/04 13:31:39 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num, char format)
{
	int		count;
	char	*hex_digits;

	count = 0;
	if (format == 'x')
		hex_digits = "0123456789abcdef";
	else if (format == 'X')
		hex_digits = "0123456789ABCDEF";
	else
		return (-1);
	if (num >= 16)
	{
		count += ft_puthex(num / 16, format);
		count += ft_puthex(num % 16, format);
	}
	else
	{
		count += ft_putchar(hex_digits[num]);
	}
	return (count);
}
