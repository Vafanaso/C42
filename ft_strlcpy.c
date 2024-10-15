/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:47:36 by vafanaso          #+#    #+#             */
/*   Updated: 2024/10/08 10:42:38 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
	{
		while (src[i] != '\0')
		{
			i++;
		}
		return (i);
	}
	while (i < num - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < num)
	{
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
