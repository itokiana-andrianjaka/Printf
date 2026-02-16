/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 01:55:05 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/05 08:57:11 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_int(char c, va_list args, int *count)
{
	unsigned int	u;

	if (c == 'u')
	{
		u = va_arg(args, int);
		ft_putunsigned_int(u, 1, count);
	}
}
