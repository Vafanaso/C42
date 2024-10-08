/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:38:55 by vafanaso          #+#    #+#             */
/*   Updated: 2024/10/07 15:01:37 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(int n)
{
	int	length;

	if (n < 0)
		length = 1;
	else if (n == 0)
		length = 1;
	else
		length = 0;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*result;

	num = n;
	len = length(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	if (num < 0)
	{
		num = -num;
	}
	result[len] = '\0';
	while (len--)
	{
		result[len] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
	{
		result[0] = '-';
	}
	return (result);
}
