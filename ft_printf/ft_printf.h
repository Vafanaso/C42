/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:32:56 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/11 13:43:20 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_print_c(int c);
int	ft_printformat(char character, va_list args);
int	ft_printf(const char *format, ...);
int	ft_print_s(char *str);
int	ft_print_di(int i);
int	ft_print_u(unsigned int i);
int	ft_print_x(unsigned int i, char format);
int	ft_print_hexptr(unsigned long int ptr);
int	ft_print_p(unsigned long int ptr);

#endif