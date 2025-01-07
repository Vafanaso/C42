/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 14:35:20 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/07 11:34:20 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_hexptr(unsigned long int ptr)
{
	long unsigned int	count;
	char				*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (ptr >= 16)
	{
		count += print_hexptr(ptr / 16);
	}
	count += print_c(hex[ptr % 16]);
	return (count);
}

int	print_p(unsigned long int ptr)
{
	long unsigned int	count;

	count = 0;
	if (ptr == 0)
	{
		count += print_s("(nil)");
		return (5);
	}
	count += print_s("0x");
	count += print_hexptr(ptr);
	return (count);
}
