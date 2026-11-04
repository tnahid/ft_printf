/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnahid <tnahid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:26:37 by tnahid            #+#    #+#             */
/*   Updated: 2026/11/04 10:26:38 by tnahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nb, int *count, char *base)
{
	if (nb >= 16)
		ft_puthex(nb / 16, count, base);
	ft_putchar(base[nb % 16], count);
}
