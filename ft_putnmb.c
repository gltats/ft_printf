/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnmb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:47:46 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/01/12 12:31:59 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	ln;
	int		len;

	len = 0;
	ln = n;
	if (ln < 0)
	{
		len += ft_putchar('-');
		ln = ln * -1;
	}
	if (ln >= 0 && ln <= 9)
	{
		len += ft_putchar(ln + '0');
	}
	else if (ln > 9)
	{
		len += ft_putnbr(ln / 10);
		len += ft_putnbr(ln % 10);
	}
	return (len);
}

//unsigned does not have - values, max. value: 4294967295
int	ft_putnbr_u(unsigned int n)
{
	int	len;

	len = 0;
	if (n <= 9)
	{
		len += ft_putchar(n + '0');
	}
	else
	{
		len += ft_putnbr_u(n / 10);
		len += ft_putnbr_u(n % 10);
	}
	return (len);
}
