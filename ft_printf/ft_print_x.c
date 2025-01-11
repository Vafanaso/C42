/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:37:28 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/11 13:48:54 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned int i, char format)
{
	unsigned int	count;
	char			*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (format == 'X')
		hex = "0123456789ABCDEF";
	if (i >= 16)
		count += ft_print_x(i / 16, format);
	count += ft_print_c(hex[i % 16]);
	return (count);
}
