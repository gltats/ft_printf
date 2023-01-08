/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_useful_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:30:30 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/01/08 15:55:20 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
    write (1, &c, 1);
    return (1);
}

int	ft_putnbr(int n)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar('-');
		ln = ln * -1;
	}
	if (ln >= 0 && ln <= 9)
	{
		ft_putchar(ln + '0');
	}
	else if (ln > 9)
	{
		ft_putnbr(ln / 10);
		ft_putnbr(ln % 10);
	}
	return (1);
}