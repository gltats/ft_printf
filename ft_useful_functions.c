/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_useful_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:30:30 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/01/10 19:56:33 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;
	char	*tempstr;

	tempstr = (char *)str;
	count = 0;
	while (tempstr[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = c;
	while (*s)
	{
		if ((char)*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (0);
}

int	ft_putstr(char *s)
{
	int	x;
	int	len;

	x = 0;
	len = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[x])
	{
		len += ft_putchar(s[x]);
		x++;
	}
	return (len);
}
