/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:37:28 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/07 11:22:38 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_x(unsigned int i, char format)
{
	unsigned int count;
	char *hex;

	count = 0;
	hex = "0123456789abcdef";
	if (format == 'X')
		hex = "0123456789ABCDEF";
	if (i > 16)
		count += print_x(i / 16, format);
	count += print_c(hex[i % 16]);
	return (count);
}