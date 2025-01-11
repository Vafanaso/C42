/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:05:53 by vafanaso          #+#    #+#             */
/*   Updated: 2024/10/08 10:42:34 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t num)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < num)
		i++;
	while (src[j] && (i + j + 1) < num)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < num)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
