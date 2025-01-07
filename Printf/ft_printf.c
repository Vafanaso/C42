/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:05:46 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/07 11:22:41 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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

	// res = ft_printf("Hello %c i want %s and %d or %i and %u with
	// 					% % \n ", 'u', " Ice cream ", 6, 765,
	// 				- 15);
	// res = ft_printf("hello, x is %x and X is %x and %p \n", 73, 452, 27485);
	res = ft_printf(" %p %p \n", (void *)LONG_MIN, (void *)LONG_MAX);
	return (0);
}
