/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:59:04 by vafanaso          #+#    #+#             */
/*   Updated: 2024/09/26 13:34:55 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(const void *src, void *dest, size_t num)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!src && !dest)
	{
		return (0);
	}
	else
		d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (num)
	{
		*d++ = *s++;
		num--;
	}
	return (dest);
}
