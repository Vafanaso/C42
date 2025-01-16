/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:34:58 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/16 17:38:33 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *arr)
{
	size_t	i;

	i = 0;
	while (*arr)
	{
		i++;
		arr++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

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

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	i = 0;
	while (i < num)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
