/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnahid <tnahid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:59:33 by tnahid            #+#    #+#             */
/*   Updated: 2026/11/03 10:01:19 by tnahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	what_format(char c, int *count, va_list ap)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (c == 'u')
		ft_putnbr(va_arg(ap, unsigned int), count);
	else if (c == 'p')
		ft_putptr(va_arg(ap, void *), count, "0123456789abcdef");
	else if (c == 'x')
		ft_puthex(va_arg(ap, unsigned int), count, "0123456789abcdef");
	else if (c == 'X')
		ft_puthex(va_arg(ap, unsigned int), count, "0123456789ABCDEF");
	else if (c == '%')
		ft_putchar('%', count);
}

int	check_format(char c)
{
	char	*f;
	int		i;

	f = "cspdiuxX%";
	i = 0;
	while (f[i])
	{
		if (f[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		count;
	va_list	ap;

	if (!format)
		return (0);
	va_start(ap, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && check_format(format[i + 1]))
		{
			i++;
			what_format(format[i], &count, ap);
		}
		else
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(ap);
	return (count);
}
