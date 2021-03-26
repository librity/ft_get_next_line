/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 01:52:08 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/21 18:27:21 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}

char	*ft_strdup(const char *source)
{
	size_t	original_size;
	char	*new_string;
	char	*destination;

	original_size = ft_strlen(source) + 1;
	new_string = malloc((original_size) * sizeof(char));
	if (new_string == NULL && source == NULL)
		return (NULL);
	destination = new_string;
	while (original_size--)
		*destination++ = *source++;
	return (new_string);
}

char	*ft_strcpy(char *dest, char *src)
{
	char *initial_destination;

	initial_destination = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (initial_destination);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t destination_length;

	destination_length = ft_strlen(dst);
	if (size <= destination_length)
		return (size + ft_strlen(src));
	while (*src && destination_length < size - 1)
		*(dst + destination_length++) = *src++;
	*(dst + destination_length) = '\0';
	return (destination_length + ft_strlen(src));
}

char	*join_and_free(char *free_me, char const *dont_free_me)
{
	size_t	total_size;
	size_t	free_me_size;
	char	*new_string;

	free_me_size = ft_strlen(free_me) + 1;
	total_size = free_me_size + ft_strlen(dont_free_me);
	new_string = malloc(total_size * sizeof(char));
	if (new_string == NULL)
	{
		free(free_me);
		return (NULL);
	}
	ft_strcpy(new_string, free_me);
	ft_strlcat(new_string, dont_free_me, total_size);
	free(free_me);
	return (new_string);
}
