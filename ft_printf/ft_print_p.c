/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 14:35:20 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/11 13:43:09 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexptr(unsigned long int ptr)
{
	long unsigned int	count;
	char				*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (ptr >= 16)
	{
		count += ft_print_hexptr(ptr / 16);
	}
	count += ft_print_c(hex[ptr % 16]);
	return (count);
}

int	ft_print_p(unsigned long int ptr)
{
	long unsigned int	count;

	count = 0;
	if (ptr == 0)
	{
		count += ft_print_s("(nil)");
		return (5);
	}
	count += ft_print_s("0x");
	count += ft_print_hexptr(ptr);
	return (count);
}
