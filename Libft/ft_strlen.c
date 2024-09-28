/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:21:17 by vafanaso          #+#    #+#             */
/*   Updated: 2024/09/26 10:52:03 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(void *arr)
{
	size_t	i;

	i = 0;
	while (arr)
	{
		i++;
	}
	return (i);
}
