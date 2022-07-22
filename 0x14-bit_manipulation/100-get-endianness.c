#include "main.h"
#include <stdio.h>

/**
 *get-endianness - entry point
 *Return: zero or one
 */

int get_endianness(void)
{
	int i;
	char *test;

	i = 1;
	test = (char *)&i;
	return ((int)test[0]);
}
