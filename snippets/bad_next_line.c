/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bad.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 01:52:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/20 13:08:21 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static bool bad_params(int file_descriptor, char **line)
{
	if (BUFFER_SIZE <= 0)
		return (true);
	if (file_descriptor <= 0)
		return (true);
	if (line == NULL)
		return (true);
	return (false);
}

static bool bad_read(int read_return)
{
	if (read_return < 0)
		return (true);
	return (false);
}

int get_next_line(int fd, char **line)
{
	static char read_buffer[BUFFER_SIZE + 1];
	char *line_buffer;
	char *linebreak_position;
	char *free_me;
	char *free_me_too;
	bool found_linebreak;
	size_t bytes_read;
	size_t linebreak_index;

	if (bad_params(fd, line))
		return (GNL_ERROR);

	// linebreak_position = ft_strchr(read_buffer, '\n');
	// if (linebreak_position != NULL)
	// {
	// 	linebreak_index = linebreak_position - read_buffer;
	// 	line_buffer = ft_substr(read_buffer, 0, linebreak_index);
	// 	// ft_strlcpy(read_buffer, linebreak_position, BUFFER_SIZE - linebreak_index);
	// 	// read_buffer[BUFFER_SIZE - linebreak_index] = '\0';
	// }
	// else
	// {
	// 	found_linebreak = false;
	// 	line_buffer = ft_strdup("");
	// }
		found_linebreak = true;

	while (found_linebreak == false)
	{
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
		if (bad_read(bytes_read))
			return (GNL_ERROR);
		read_buffer[bytes_read] = '\0';

		linebreak_position = ft_strchr(read_buffer, '\n');

		if (linebreak_position != NULL)
		{
			found_linebreak = true;
			linebreak_index = linebreak_position - read_buffer;
			free_me_too = ft_substr(read_buffer, 0, linebreak_index);
			ft_strlcpy(read_buffer, linebreak_position, BUFFER_SIZE - linebreak_index);
			read_buffer[BUFFER_SIZE - linebreak_index] = '\0';

			free_me = line_buffer;
			line_buffer = ft_strjoin(line_buffer, free_me_too);
			free(free_me);
			free(free_me_too);
		}
		else
		{
			free_me = line_buffer;
			line_buffer = ft_strjoin(line_buffer, read_buffer);
			free(free_me);
		}
	}

	*line = line_buffer;
	if (bytes_read == 0)
		return (GNL_FOUND_EOF);
	return (GNL_FOUND_LINEBREAK);
}
