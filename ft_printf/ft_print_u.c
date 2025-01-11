/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:37:24 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/11 13:43:15 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int i)
{
	unsigned int	count;

	count = 0;
	if (i > 9)
	{
		count += ft_print_di(i / 10);
	}
	count += ft_print_c((i % 10) + '0');
	return (count);
}
