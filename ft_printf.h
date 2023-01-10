/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:11:26 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/01/10 19:56:47 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//# include "libft.h"
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <inttypes.h>

# define HEX_DIGITS_LC "0123456789abcdef"
# define HEX_DIGITS_UPC "0123456789ABCDEF"

int		ft_putchar(char c);
int		ft_printf(const char *str, ...);
int		ft_pnt(unsigned long nb);
int		ft_print_pnt(unsigned long n);
int		print_hex_lc(int x);
int		print_hex_upc(int x);
size_t	ft_strlen(const char *str);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
char	*ft_strchr(const char *s, int c);
int		ft_putstr(char *s);
#endif