/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:27:37 by mbarranq          #+#    #+#             */
/*   Updated: 2024/10/04 13:31:34 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr_recursive(unsigned long long ptr);

int	ft_putptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putptr_recursive(ptr);
	return (count);
}

static int	ft_putptr_recursive(unsigned long long ptr)
{
	int		count;
	char	*hex_digits;

	count = 0;
	hex_digits = "0123456789abcdef";
	if (ptr >= 16)
	{
		count += ft_putptr_recursive(ptr / 16);
		count += ft_putptr_recursive(ptr % 16);
	}
	else
	{
		count += ft_putchar(hex_digits[ptr]);
	}
	return (count);
}
