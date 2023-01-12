/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimals.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:40:51 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/01/12 17:45:08 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nb, char l)
{
	int	len;

	len = 0;
	if (nb < 10)
		len += ft_putchar(nb + '0');
	else if (nb < 16)
	{
		if (l == 'x')
			len += ft_putchar(nb + 'a' - 10);
		else if (l == 'X')
			len += ft_putchar(nb + 'A' - 10);
	}
	else
	{
			len += ft_print_hex(nb / 16, l);
			len += ft_print_hex(nb % 16, l);
	}
	return (len);
}
