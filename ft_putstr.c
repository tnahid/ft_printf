/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnahid <tnahid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:01:30 by tnahid            #+#    #+#             */
/*   Updated: 2026/11/03 10:02:16 by tnahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	size_t	i;

	if (!str)
	{
		ft_putstr("(null)", count);
		return ;
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], count);
		i++;
	}
}
