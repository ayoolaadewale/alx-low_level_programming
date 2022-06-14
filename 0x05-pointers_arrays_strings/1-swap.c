#include "main.h"
#include <stdio.h>

/**
 *swap_int - Entry point
 *@a: Parameter one
 *@b: Parameter two
 */

void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = d;
}
