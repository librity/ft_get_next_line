/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eof.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:47:34 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/14 22:11:35 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 eof.c && ./a.out

#include <stdio.h>

int main()
{
	FILE *f = fopen("eof_test", "r");
	int c = getc(f);
	while (c != EOF)
	{
		putchar(c);
		c = getc(f);
	}
	fclose(f);
	getchar();
	return 0;
}
