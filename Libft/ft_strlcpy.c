/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:47:36 by vafanaso          #+#    #+#             */
/*   Updated: 2024/09/27 13:29:54 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *src, char *dest, size_t num)
{
	size_t i;

	i = 0;

	if (num > 0)
	{
		while (src[i] && i < (num - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
}