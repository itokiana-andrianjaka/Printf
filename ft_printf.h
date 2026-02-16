/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiana-an <tiana-an@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 14:08:50 by tiana-an          #+#    #+#             */
/*   Updated: 2026/02/16 15:01:19 by tiana-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_hexadecimal(char c, va_list args, int *count);
void	ft_integer(char c, va_list args, int *count);
void	ft_percent(char c, int *count);
void	ft_pointer(char c, va_list args, int *count);
void	ft_print_hex(unsigned long int num, int fd, int mode, int *count);
void	ft_putnbr_fd_c(int n, int fd, int *count);
void	ft_putstr_fd_c(char *s, int fd, int *count);
void	ft_putunsigned_int(unsigned long int n, int fd, int *count);
void	ft_single_c(char c, va_list args, int *count);
void	ft_string(char c, va_list args, int *count);
void	ft_unsigned_int(char c, va_list args, int *count);
void	ft_putchar_fd_c(char c, int fd, int *count);
int		ft_list(int c);

#endif
