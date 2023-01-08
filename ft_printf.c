/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:07:23 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/01/08 15:55:12 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
    write (1, &c, 1);
    return (1);
}

static int	ft_putnbr(int n)
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

static char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*letter;

	letter = (char *)s;
	i = ft_strlen(letter);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			letter = (char *)&s[i];
			return (letter);
		}
		i--;
	}
	return (0);
}

static int ft_printf_arg(const char *sign, int i, va_list ap)
{
	if (sign[i + 1] == '%')
		return (ft_putchar(sign[i + 1]));
	if (sign[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, char)));
	if (sign[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	//if (sign[i + 1] == 'p')
	//	return (ft_putstr(va_arg(ap, char *)));
	if (sign[i + 1] == 'd' || sign[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if (sign[i + 1] == 'u')
		return (ft_putnbr(va_arg(ap, unsigned int)));
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int i;
	int j;

	i = 0;
	j = 0;
	va_start(ap, str);
	while(str[i])
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