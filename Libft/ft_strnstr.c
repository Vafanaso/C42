/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 14:51:28 by vafanaso          #+#    #+#             */
/*   Updated: 2024/09/29 15:37:10 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;
	int		temp;

	i = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			temp = i;
			j = 0;
			while (j < (ft_strlen(needle)) && haystack[i] == needle[j]
				&& i < len)
			{
				i++;
				j++;
			}
			if (j == (ft_strlen(needle)))
				return ((char *)&haystack[temp]);
		}
		i++;
	}
	return (NULL);
}
