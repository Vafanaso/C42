/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:10:05 by vafanaso          #+#    #+#             */
/*   Updated: 2024/09/30 11:43:24 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		j;
	int		i;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	tmp = (char *)malloc(len * sizeof(char));
	i = 0;
	j = 0;
	if (!tmp)
		return (NULL);
	while (s1[i])
	{
		tmp[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		tmp[j++] = s2[i++];
	}
	tmp[j] = 0;
	return (tmp);
}
