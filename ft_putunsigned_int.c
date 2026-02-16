/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananarivo  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 07:06:07 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/04 07:09:14 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned_int(unsigned long int n, int fd, int *count)
{
	if (n >= 0 && n <= 9)
		ft_putchar_fd_c(((unsigned int)n + '0'), fd, count);
	if (n >= 10)
	{
		ft_putunsigned_int(((unsigned int)n / 10), fd, count);
		ft_putunsigned_int(((unsigned int)n % 10), fd, count);
	}
}
