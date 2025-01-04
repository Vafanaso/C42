/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:59:33 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/04 14:50:46 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_c(int c)
{
	write(1, &c, 1);
	return (1);
}

int	print_s(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &(str[i]), 1);
		i++;
	}
	return (i);
}

int	print_di(int i)
{
	int		count;
	long	num;

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
int	print_u(unsigned int i)
{
	unsigned int	count;

	count = 0;
	if (i > 9)
	{
		count += print_di(i / 10);
	}
	count += print_c((i % 10) + '0');
	return (count);
}

int	print_x(unsigned int i, char format)
{
	unsigned int	count;
	char			*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (format == 'X')
		hex = "0123456789ABCDEF";
	if (i > 16)
		count += print_x(i / 16, format);
	count += print_c(hex[i % 16]);
	return (count);
}
