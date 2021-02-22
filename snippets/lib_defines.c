/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_defines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 00:07:42 by lpaulo-m          #+#    #+#             */
/*   Updated: 2021/02/22 00:18:56 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <fcntl.h>
#include <sys/resource.h>

int main()
{
	printf("------ stdio.h ------\n", stdout);
	printf("EOF: %d\n", EOF);
	printf("_IOFBF: %d\n", _IOFBF);
	printf("_IOLBF: %d\n", _IOLBF);
	printf("_IONBF: %d\n", _IONBF);
	printf("FOPEN_MAX: %d\n", FOPEN_MAX);
	printf("FILENAME_MAX: %d\n", FILENAME_MAX);
	printf("L_tmpnam: %d\n", L_tmpnam);
	printf("SEEK_CUR: %d\n", SEEK_CUR);
	printf("SEEK_END: %d\n", SEEK_END);
	printf("SEEK_SET: %d\n", SEEK_SET);
	printf("TMP_MAX: %d\n", TMP_MAX);
	printf("stderr: %d\n", stderr);
	printf("stdin: %d\n", stdin);
	printf("stdout: %d\n", stdout);
	printf("------ stdio.h ------\n", stdout);

	printf("------ unistd.h ------\n", stdout);
	printf("SEEK_CUR: %d\n", SEEK_CUR);
	printf("SEEK_END: %d\n", SEEK_END);
	printf("SEEK_SET: %d\n", SEEK_SET);
	printf("ARG_MAX: %d\n", ARG_MAX);
	printf("OPEN_MAX: %d\n", OPEN_MAX);
	printf("_SC_IPV6 : %d\n", _SC_IPV6);
	printf("_SC_REGEXP  : %d\n", _SC_REGEXP);
	printf("------ unistd.h ------\n", stdout);

	printf("------ stdlib.h ------\n", stdout);
	printf("NULL: %d\n", NULL);
	printf("EXIT_FAILURE: %d\n", EXIT_FAILURE);
	printf("EXIT_SUCCESS: %d\n", EXIT_SUCCESS);
	printf("RAND_MAX: %d\n", RAND_MAX);
	printf("MB_CUR_MAX: %d\n", MB_CUR_MAX);
	printf("------ stdlib.h ------\n", stdout);

	printf("------ limits.h ------\n", stdout);
	printf("CHAR_BIT: %d\n", CHAR_BIT);
	printf("SCHAR_MIN: %d\n", SCHAR_MIN);
	printf("SCHAR_MAX: %d\n", SCHAR_MAX);
	printf("UCHAR_MAX: %d\n", UCHAR_MAX);
	printf("CHAR_MIN: %d\n", CHAR_MIN);
	printf("CHAR_MAX: %d\n", CHAR_MAX);
	printf("MB_LEN_MAX: %d\n", MB_LEN_MAX);
	printf("SHRT_MIN: %d\n", SHRT_MIN);
	printf("SHRT_MAX: %d\n", SHRT_MAX);
	printf("USHRT_MAX: %d\n", USHRT_MAX);
	printf("INT_MIN: %d\n", INT_MIN);
	printf("INT_MAX: %d\n", INT_MAX);
	printf("UINT_MAX: %d\n", UINT_MAX);
	printf("LONG_MIN: %d\n", LONG_MIN);
	printf("LONG_MAX: %d\n", LONG_MAX);
	printf("ULONG_MAX: %d\n", ULONG_MAX);
	printf("SSIZE_MAX: %d\n", SSIZE_MAX);
	printf("------ limits.h ------\n", stdout);

	printf("------ stdbool.h ------\n", stdout);
	printf("true: %d\n", true);
	printf("false: %d\n", false);
	printf("__bool_true_false_are_defined: %d\n", __bool_true_false_are_defined);
	printf("------ stdbool.h ------\n", stdout);

	printf("------ fcntl.h ------\n", stdout);
	printf("F_GETFD: %d\n", F_GETFD);
	printf("F_GETFL: %d\n", F_GETFL);
	printf("F_GETLK: %d\n", F_GETLK);
	printf("F_GETOWN: %d\n", F_GETOWN);
	printf("------ fcntl.h ------\n", stdout);

	printf("------ sys/resource.h ------\n", stdout);
	printf("RLIMIT_NOFILE: %d\n", RLIMIT_NOFILE);
	printf("------ sys/resource.h ------\n", stdout);

	return (0);
}
