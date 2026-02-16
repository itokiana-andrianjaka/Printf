/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 05:21:22 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/04 07:17:11 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned long int num, int fd, int mode, int *count)
{
	char	*hex;

	if (mode == 1)
		hex = "0123456789abcdef";
	if (mode == 2)
		hex = "0123456789ABCDEF";
	if (num >= 0 && num < 16)
	{
		ft_putchar_fd_c(hex[num], fd, count);
	}
	if (num >= 16)
	{
		ft_print_hex((num / 16), fd, mode, count);
		ft_print_hex((num % 16), fd, mode, count);
	}
}
