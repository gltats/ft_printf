/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:07:23 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/01/10 19:21:50 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

static int	ft_printf_arg(const char *sign, int i, va_list ap)
{
	if (sign[i + 1] == '%')
		return (ft_putchar(sign[i + 1]));
	if (sign[i + 1] == 'c')
		return (ft_putchar((char)va_arg(ap, int)));
	if (sign[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (sign[i + 1] == 'p')
		return (ft_print_pnt(va_arg(ap, unsigned long)));
	if (sign[i + 1] == 'd' || sign[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if (sign[i + 1] == 'u')
		return (ft_putnbr_u(va_arg(ap, unsigned int)));
	if (sign[i + 1] == 'x')
		return (print_hex_lc(va_arg(ap, int)));
	if (sign[i + 1] == 'X')
		return (print_hex_upc(va_arg(ap, int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(ap, str);
	if (!str)
	{
		return (0);
	}
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			j = j + ft_printf_arg(str, i, ap);
			i++;
		}
		else
			j = j + ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (j);
}

// int main() 
// {
// int x = 42;
// char y = 'A';
// char *str = "Hello, world!";
// printf("C function-> x = %d, y = %c, str = %s\n", x, y, str);
// ft_printf("My function-> x = %d, y = %c, str = %s\n", x, y, str);
// printf("C function-> Hex value of x: %X\n", x);
// ft_printf("My function-> value of x: %X\n", x);
// printf("C function-> Hex value of x: %x\n", x);
// ft_printf("My function-> value of x: %x\n", x);
// printf("C function-> Pointer value: %p\n", &x);
// ft_printf("My function-> Pointer value: %p\n", &x);
// printf("C function-> Unsigned int : %u\n", x);
// ft_printf("My function-> Unsigned int : %u\n", x);
// return(0);
// }