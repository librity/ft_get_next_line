/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 02:28:35 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/14 21:18:41 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 getchar.c && ./a.out

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%d\n", EOF);
	printf("%d\n", BUFFER_SIZE);

	long nc;
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);

	return (0);
}
