/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m@student.42sp.org.br <lpaulo-m>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 19:27:11 by lcandido          #+#    #+#             */
/*   Updated: 2021/02/23 18:49:00 by lpaulo-m@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdbool.h>

static void test_gnl(int file_descriptor, char const *current_file)
{
	int gnl_return;
	int line_counter;
	char *current_line;

	printf("Testing file %s\n", current_file);
	line_counter = 0;
	while (true)
	{
		gnl_return = get_next_line(file_descriptor, &current_line);
		line_counter++;
		if (gnl_return == -1)
			break;
		printf("LINE %d: '%s'\n", line_counter, current_line);
		free(current_line);
		if (gnl_return == 0)
			break;
	}
	printf("LAST RETURN: %d\n", gnl_return);
	printf("---------------------------------------------------------------\n");
	close(file_descriptor);
}

int main(void)
{
	char const *current_file;
	int current_file_descriptor;

	// current_file = "./example_files/test1";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/test2";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/test3";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/test4";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/test5";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/test6";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/test7";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/41_no_nl";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/41_with_nl";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/42_no_nl";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/42_with_nl";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/43_no_nl";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/43_with_nl";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/alternate_line_nl_no_nl";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/alternate_line_nl_with_nl";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/big_line_no_nl";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/big_line_with_nl";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/empty";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	current_file = "./example_files/multiple_line_no_nl";
	current_file_descriptor = open(current_file, O_RDONLY);
	test_gnl(current_file_descriptor, current_file);

	current_file = "./example_files/multiple_line_with_nl";
	current_file_descriptor = open(current_file, O_RDONLY);
	test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/multiple_nlx5";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	// current_file = "./example_files/nl";
	// current_file_descriptor = open(current_file, O_RDONLY);
	// test_gnl(current_file_descriptor, current_file);

	return (0);
}
