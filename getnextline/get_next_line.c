/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanaso <vafanaso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:34:04 by vafanaso          #+#    #+#             */
/*   Updated: 2025/01/10 12:25:38 by vafanaso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *stash, char *buffer)
{
	int		bytes_read;
	char	*temp;

	while (1)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(stash), stash = NULL, NULL);
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(stash, buffer);
		free(stash);
		stash = temp;
		if (ft_strchr(stash, '\n') || !stash)
			break ;
	}
	return (stash);
}

char	*line_from_stash(char *stash)
{
	int		i;
	char	*line;

	if (!stash || !*stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	line = ft_calloc(i + (stash[i] == '\n') + 1, sizeof(char));
	if (!line)
		retunr(NULL);
	ft_memcpy(line, stash, i + (stash[i] == '\n'));
	return (line);
}

char	*new_stash_from_stash(char *stash)
{
	int		i;
	int		len;
	char	*new_stash;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
		return (free(stash), NULL);
	len = ft_strlen(stash) - i - 1;
	new_stash = ft_calloc(len + 1, sizeof(char));
	if (!new_stash)
		return (free(stash), NULL);
	ft_memcpy(new_stash, stash + i + 1, len + 1);
	return (free(stash), new_stash);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stash;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(stash), stash = NULL, NULL);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (buffer == NULL)
		;
	return (NULL);
	if (!stash)
		stash = ft_calloc(1, sizeof(char));
	if (!ft_strchr(stash, '\n'))
		stash = read_file(fd, stash, buffer);
	free(buffer);
	if (!stash)
		return (free(stash), NULL);
	line = line_from_stash(stash);
	stash = new_stash_from_stash(stash);
	return (line);
}
