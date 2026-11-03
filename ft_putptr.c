/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnahid <tnahid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:59:13 by tnahid            #+#    #+#             */
/*   Updated: 2026/11/03 09:52:21 by tnahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *str, int *count, char *base)
{
	unsigned long	ptr;

	if (!str)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ptr = (unsigned long)str;
	if (ptr >= 16)
		ft_putptr((void *)ptr, count, base);
	if (ptr < 16)
		ft_putstr("0x", count);
	ft_putchar(base[ptr % 16], count);
}
