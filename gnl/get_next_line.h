/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 01:52:14 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/03/03 20:23:31 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include <sys/resource.h>

# define GNL_FOUND_LINEBREAK 1
# define GNL_FOUND_EOF 0
# define GNL_ERROR -1
# define MAX_FILE_DESCRIPTOR RLIMIT_NOFILE

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *source);
char	*ft_strcpy(char *dest, char *src);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*join_and_free(char *free_me, char const *dont_free_me);

int		get_next_line(int fd, char **line);

#endif
