/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarranq <mbarranq@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:25:41 by mbarranq          #+#    #+#             */
/*   Updated: 2024/10/04 13:31:28 by mbarranq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nb)
{
	int		count;
	char	c;

	count = 0;
	if (nb >= 10)
	{
		count += ft_putunsigned(nb / 10);
		count += ft_putunsigned(nb % 10);
	}
	else
	{
		c = nb + '0';
		count += ft_putchar(c);
	}
	return (count);
}
