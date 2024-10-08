/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:32:45 by vafanaso          #+#    #+#             */
/*   Updated: 2024/10/06 18:44:58 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c, char sep)
{
	if (c == sep)
	{
		return (1);
	}
	return (0);
}

int	count_words(char *str, char sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i], sep))
		{
			i++;
		}
		if (!is_space(str[i], sep) && str[i])
		{
			len++;
		}
		while (!is_space(str[i], sep) && str[i])
		{
			i++;
		}
	}
	return (len);
}

char	*ft_word(char *str, char sep)
{
	int		i;
	char	*result;

	i = 0;
	while (str[i] && !is_space(str[i], sep))
	{
		i++;
	}
	result = (char *)malloc(i + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (str[i] && !is_space(str[i], sep))
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	*s1;
	int		len;
	int		i;
	char	**result;

	s1 = (char *)s;
	if (!s)
		return (NULL);
	len = count_words(s1, c);
	i = 0;
	result = (char **)malloc((len + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s1)
	{
		while (*s1 && is_space(*s1, c))
			s1++;
		if (*s1 && !is_space(*s1, c))
			result[i++] = ft_word(s1, c);
		while (*s1 && !is_space(*s1, c))
			s1++;
	}
	result[i] = NULL;
	return (result);
}
