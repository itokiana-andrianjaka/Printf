/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 03:01:15 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/05 08:57:26 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(char c, va_list args, int *count)
{
	void	*next;
	char	*hex;

	hex = "0123456789abcdef";
	if (c == 'p')
	{
		next = va_arg(args, void *);
		if (!next)
			ft_putstr_fd_c("(nil)", 1, count);
		else
		{
			ft_putstr_fd_c("0x", 1, count);
			ft_print_hex((unsigned long int)next, 1, 1, count);
		}
	}
}
