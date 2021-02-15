/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_variables.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 02:10:40 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/14 02:14:21 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int initializer(void)
{
	return 50;
}

int main()
{
	auto int a = -28;
	static int b = 8;

	printf("The value of auto variable : %d\n", a);
	printf("The value of static variable b : %d\n", b);

	if (a != 0)
		printf("The sum of static variable and auto variable : %d\n", (b + a));

	static int x;
	int y;
	printf("%d \n %d", x, y);

	// Errors out.
	// static int i = initializer();
	// printf(" value of i = %d", i);
	// getchar();

	return 0;
}
