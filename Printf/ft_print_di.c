/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:37:10 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/07 11:22:28 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_di(int i)
{
	int count;
	long num;

	num = i;
	count = 0;
	if (num < 0)
	{
		count += print_c('-');
		num = -num;
	}
	if (num > 9)
	{
		count += print_di(num / 10);
	}
	count += print_c((num % 10) + '0');
	return (count);
}