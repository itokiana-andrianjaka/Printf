/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 01:22:02 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/16 15:02:15 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	list_ft(char c, va_list args, int *count, int *i)
{
	ft_percent(c, count);
	ft_single_c(c, args, count);
	ft_string(c, args, count);
	ft_integer(c, args, count);
	ft_unsigned_int(c, args, count);
	ft_hexadecimal(c, args, count);
	ft_pointer(c, args, count);
	(*i) += 2;
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		count;

	i = 0;
	va_start(args, format);
	count = 0;
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!ft_list(format[i + 1]))
			{
				if (format[(i++) + 1] != '\0')
					ft_putchar_fd_c('%', 1, &count);
			}
			else
				list_ft(format[i + 1], args, &count, &i);
		}
		else
			ft_putchar_fd_c(format[i++], 1, &count);
	}
	return (va_end(args), count);
}
