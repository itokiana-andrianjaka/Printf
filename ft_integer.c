/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 01:37:26 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/05 08:57:02 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_integer(char c, va_list args, int *count)
{
	int	integer;

	if (c == 'd' || c == 'i')
	{
		integer = va_arg(args, int);
		ft_putnbr_fd_c(integer, 1, count);
	}
}
