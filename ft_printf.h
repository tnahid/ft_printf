/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnahid <tnahid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:03:43 by tnahid            #+#    #+#             */
/*   Updated: 2026/11/03 12:37:21 by tnahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>

void	ft_putchar(char c, int *count);
void	ft_putnbr(long n, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putptr(void *str, int *count, char *base);
void	ft_puthex(unsigned int nb, int *count, char *base);
int		ft_printf(const char *format, ...);

#endif
