/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:06:59 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/03 17:37:56 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printformat(char character, va_list args)
{
	int count;

	count = 0;

	if (character == 'c')
		count += print_c(va_arg(args, int));
	else if (character == 's')
		count += print_s(va_arg(args, char *));
	else if (character == 'd' || character == 'i')
		count += print_di(va_arg(args, int));
	else if (character == 'u')
		count += print_u(va_arg(args, unsigned int));

	return (count);
}