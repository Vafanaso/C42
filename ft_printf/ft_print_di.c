/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:37:10 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/11 13:43:08 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_di(int i)
{
	int		count;
	long	num;

	num = i;
	count = 0;
	if (num < 0)
	{
		count += ft_print_c('-');
		num = -num;
	}
	if (num > 9)
	{
		count += ft_print_di(num / 10);
	}
	count += ft_print_c((num % 10) + '0');
	return (count);
}
