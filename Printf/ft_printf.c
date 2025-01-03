/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:05:46 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/03 17:37:58 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// int	iteration(const char *format, va_list args)
// {
// 	int	count;

// 	count = 0;
// 	while (*format)
// 	{
// 		while (*format != '%')
// 		{
// 			count += write(1, format, 1);
// 			format++;
// 		}
// 		count += ft_printformat(*(++format), args);
// 	}
// 	return (count);
// }

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	args;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			count += ft_printformat(format[++i], args);
		else
			count += write(1, &(format[i]), 1);
		i++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	int	res;

	res = ft_printf("Hello %c i want %s and %d or %i and %u", 'u', "Ice cream",
			6, 765, -15);
	return (0);
}
