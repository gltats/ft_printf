/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fckpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:11:26 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/01/10 19:25:35 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pnt(unsigned long nb)
{
	int	len;

	len = 0;
	if (nb < 10)
		len += ft_putchar(nb + 48);
	else if (nb < 16)
		len += ft_putchar(nb + 'a' - 10);
	else
	{
		len += ft_pnt(nb / 16);
		len += ft_pnt(nb % 16);
	}
	return (len);
}

int	ft_print_pnt(unsigned long nb)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len = len + ft_pnt(nb);
	return (len);
}
