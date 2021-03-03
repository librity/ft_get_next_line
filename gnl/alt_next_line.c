/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alt_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:22:27 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 20:36:26 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (*s++ == '\0')
			return (NULL);
	return (char *)s;
}

static bool	bad_params(int file_descriptor, char **line)
{
	if (file_descriptor < 0)
		return (true);
	if (file_descriptor > MAX_FILE_DESCRIPTOR)
		return (true);
	if (BUFFER_SIZE <= 0)
		return (true);
	if (line == NULL)
		return (true);
	return (false);
}

static int last_returns(char *read_buffer, char **line, int bytes_read)
{
	char *linebreak_position;

	linebreak_position = ft_strchr(read_buffer, '\n');
	if (linebreak_position != NULL)
		ft_strcpy(read_buffer, linebreak_position + 1);
	if (line == NULL)
		return (GNL_ERROR);
	linebreak_position = ft_strchr(*line, '\n');
	if (linebreak_position)
		*linebreak_position = '\0';
	if (bytes_read == 0)
		return (GNL_FOUND_EOF);
	return (GNL_FOUND_LINEBREAK);
}

int get_next_line(int fd, char **line)
{
	static char read_buffer[BUFFER_SIZE + 1];
	char *line_buffer;
	int     bytes_read;

	if (bad_params(fd, line))
		return (GNL_ERROR);
	line_buffer = ft_strdup(read_buffer);
	if (!line_buffer)
		return (GNL_ERROR);
	bytes_read = 1;
	while (!ft_strchr(read_buffer, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
		if (bytes_read < 0 || bytes_read > BUFFER_SIZE)
		{
			free(line_buffer);
			return (GNL_ERROR);
		}
		read_buffer[bytes_read] = '\0';
		line_buffer = join_and_free(line_buffer, read_buffer);
		if (line_buffer == NULL)
			return (GNL_ERROR);
	}
	*line = line_buffer;
	return (last_returns(read_buffer, line, bytes_read));
}
