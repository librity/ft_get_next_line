/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:00:01 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/14 17:09:01 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int hex = 0xFAFA;

	printf("%d\n", hex);
	printf("%d\n", 0xFAFA);

	hex = 0x10;
	printf("%d\n", hex);
	printf("%d\n", 0x10);
	printf("%d\n", 16);

	return 0;
}
