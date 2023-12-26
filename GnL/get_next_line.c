/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:48:40 by sfu               #+#    #+#             */
/*   Updated: 2023/12/27 02:06:45 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*find_new_line(char **temp_box)
{
	char	*withline;
	char	*leftovers;
	int		len;

	len = 0;
	while ((*temp_box)[len] != '\n' && (*temp_box)[len] != '\0')
		len++;
	if ((*temp_box)[len] == '\n')
	{
		withline = ft_substr(*temp_box, 0, (len + 1));
		leftovers = ft_substr(*temp_box, (len + 1), ft_strlen(*temp_box) - (len
					+ 1));
		free(*temp_box);
		*temp_box = leftovers;
		return (withline);
	}
	return (NULL);
}

char	*do_read(int fd)
{
	char	*buffer;
	int		bytes_read;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
	{
		free(buffer);
		return (NULL);
	}
	buffer[bytes_read] = '\0';
	return (buffer);
}

char	*do_get_next_line(char **temp_box, int fd)
{
	char	*second_temp_box;
	char	*buffer;
	char	*processed_sentence;

	processed_sentence = find_new_line(temp_box);
	if (processed_sentence)
		return (processed_sentence);
	buffer = do_read(fd);
	if (!buffer)
	{
		processed_sentence = ft_strdup(*temp_box);
		free(*temp_box);
		*temp_box = NULL;
		if (*processed_sentence)
			return (processed_sentence);
		free(processed_sentence);
		return (NULL);
	}
	second_temp_box = ft_strjoin(*temp_box, buffer);
	free(*temp_box);
	*temp_box = second_temp_box;
	free(buffer);
	return (do_get_next_line(temp_box, fd));
}

char	*get_next_line(int fd)
{
	static char	*temp_box;

	if (fd < 0 || BUFFER_SIZE <= 0 || (read(fd, NULL, 0) < 0))
	{
		free(temp_box);
		temp_box = NULL;
		return (NULL);
	}
	if (!temp_box)
		temp_box = ft_strdup("");
	return (do_get_next_line(&temp_box, fd));
}
