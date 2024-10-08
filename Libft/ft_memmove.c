/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:15:32 by vafanaso          #+#    #+#             */
/*   Updated: 2024/09/29 13:00:41 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!src && !dest)
		return (NULL);
	if (d < s)
	{
		while (num-- > 0)
			*d++ = *s++;
	}
	else
	{
		while (num-- > 0)
			d[num] = s[num];
	}
	return (dest);
}
