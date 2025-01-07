/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:37:24 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/07 11:22:36 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_u(unsigned int i)
{
	unsigned int count;

	count = 0;
	if (i > 9)
	{
		count += print_di(i / 10);
	}
	count += print_c((i % 10) + '0');
	return (count);
}