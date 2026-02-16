/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_single_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 01:23:07 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/05 08:56:48 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_single_c(char c, va_list args, int *count)
{
	int	nextarg;

	if (c == 'c')
	{
		nextarg = va_arg(args, int);
		ft_putchar_fd_c((char)nextarg, 1, count);
	}
}
