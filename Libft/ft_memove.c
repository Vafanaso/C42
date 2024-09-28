/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:15:32 by vafanaso          #+#    #+#             */
/*   Updated: 2024/09/26 10:52:03 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memove(const void *src, void *dest, size_t num)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (d < s)
	{
		while (num)
		{
			*d++ = *s++;
			num--;
		}
	}
	else
	{
		d = d + num;
		s = s + num;
		while (num)
		{
			*d-- = *s--;
			num--;
		}
	}
	return (dest);
}
