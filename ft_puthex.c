/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnahid <tnahid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:03:15 by tnahid            #+#    #+#             */
/*   Updated: 2026/11/03 09:43:17 by tnahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nb, int *count, char *base)
{
	if (nb >= 16)
		ft_puthex(nb / 16, count, base);
	ft_putchar(base[nb % 16], count);
}
