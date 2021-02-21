/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 19:27:11 by lcandido          #+#    #+#             */
/*   Updated: 2021/02/20 18:53:32 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdbool.h>

static void	test_gnl(int file_descriptor, char const *current_file)
{
	int		gnl_return;
	int		line_counter;
	char	*current_line;

	printf("Testing file %s\n", current_file);
	line_counter = 0;
	while (true)
	{
		gnl_return = get_next_line(file_descriptor, &current_line);
		line_counter++;
		if (gnl_return == -1)
			break ;
		printf("LINE %d: '%s'\n", line_counter, current_line);
		free(current_line);
		if (gnl_return == 0)
			break ;
	}
	printf("LAST RETURN: %d\n", gnl_return);
	printf("---------------------------------------------------------------\n");
	close(file_descriptor);
}

int			main(void)
{
	char const	*current_file;
	int			current_file_descriptor;

	current_file = "./test1";
	current_file_descriptor = open(current_file, O_RDONLY);
	test_gnl(current_file_descriptor, current_file);
	current_file = "./test2";
	current_file_descriptor = open(current_file, O_RDONLY);
	test_gnl(current_file_descriptor, current_file);
	current_file = "./test3";
	current_file_descriptor = open(current_file, O_RDONLY);
	test_gnl(current_file_descriptor, current_file);
	current_file = "./test4";
	current_file_descriptor = open(current_file, O_RDONLY);
	test_gnl(current_file_descriptor, current_file);
	current_file = "./test5";
	current_file_descriptor = open(current_file, O_RDONLY);
	test_gnl(current_file_descriptor, current_file);
	current_file = "./test6";
	current_file_descriptor = open(current_file, O_RDONLY);
	test_gnl(current_file_descriptor, current_file);
	current_file = "./test7";
	current_file_descriptor = open(current_file, O_RDONLY);
	test_gnl(current_file_descriptor, current_file);
	return (0);
}
