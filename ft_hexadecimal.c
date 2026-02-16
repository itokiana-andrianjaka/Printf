/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 02:40:28 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/05 08:57:18 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexadecimal(char c, va_list args, int *count)
{
	unsigned int	next_arg;

	if (c == 'x' || c == 'X')
	{
		next_arg = va_arg(args, unsigned int);
		if (c == 'x')
			ft_print_hex(next_arg, 1, 1, count);
		else if (c == 'X')
			ft_print_hex(next_arg, 1, 2, count);
	}
}
