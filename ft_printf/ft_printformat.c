/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:06:59 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/11 13:43:21 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printformat(char character, va_list args)
{
	int	count;

	count = 0;
	if (character == 'c')
		count += ft_print_c(va_arg(args, int));
	else if (character == 's')
		count += ft_print_s(va_arg(args, char *));
	else if (character == 'd' || character == 'i')
		count += ft_print_di(va_arg(args, int));
	else if (character == 'u')
		count += ft_print_u(va_arg(args, unsigned int));
	else if (character == '%')
		count += ft_print_c('%');
	else if (character == 'x' || character == 'X')
		count += ft_print_x(va_arg(args, unsigned int), character);
	else if (character == 'p')
		count += ft_print_p(va_arg(args, unsigned long int));
	return (count);
}
