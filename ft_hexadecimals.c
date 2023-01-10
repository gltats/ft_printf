/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimals.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:40:51 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/01/10 19:27:51 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//">>" shifts the bits of its first operand to the right by the number 
//of positions specified by the second operand. 
//It shifts the bits of x 4 places to the right.

int	print_hex_lc(int x)
{
	char	buf[8];
	int		i;
	int		count;

	i = 7;
	count = 0;
	buf[i] = '\0';
	while (x > 0 && i > 0)
	{
		buf[--i] = HEX_DIGITS_LC[x & 0xf];
		x = x >> 4;
		count++;
	}
	ft_putstr(buf + i);
	return (count);
}

int	print_hex_upc(int x)
{
	char	buf[8];
	int		i;
	int		counter;

	i = 7;
	counter = 0;
	buf[i] = '\0';
	while (x > 0 && i > 0)
	{
		buf[--i] = HEX_DIGITS_UPC[x & 0xf];
		x = x >> 4;
		counter++;
	}
	ft_putstr (buf + i);
	return (counter);
}
