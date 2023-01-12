/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgomes-l <tgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:11:26 by tgomes-l          #+#    #+#             */
/*   Updated: 2023/01/12 17:50:00 by tgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <inttypes.h>
# include <limits.h>
# include <stdint.h>

int		ft_putchar(char c);
int		ft_printf(const char *str, ...);
int		ft_print_pnt(unsigned long n);
int		ft_print_hex(unsigned int nb, char l);
size_t	ft_strlen(const char *str);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
char	*ft_strchr(const char *s, int c);
int		ft_putstr(char *s);
#endif