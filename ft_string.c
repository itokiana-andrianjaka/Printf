/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 01:23:19 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/05 08:56:55 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_string(char c, va_list args, int *count)
{
	char	*snext;

	if (c == 's')
	{
		snext = va_arg(args, char *);
		if (!snext)
			ft_putstr_fd_c("(null)", 1, count);
		ft_putstr_fd_c(snext, 1, count);
	}
}
