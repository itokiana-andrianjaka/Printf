/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:00:46 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/04 08:49:18 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd_c(int n, int fd, int *count)
{
	long int	i;

	i = n;
	if (i < 0)
	{
		ft_putchar_fd_c('-', fd, count);
		i = i * -1;
	}
	if (i >= 0 && i <= 9)
	{
		ft_putchar_fd_c((i + '0'), fd, count);
	}
	if (i >= 10)
	{
		ft_putnbr_fd_c((i / 10), fd, count);
		ft_putnbr_fd_c((i % 10), fd, count);
	}
}
