#include "main.h"

/**
 *flip_bits - entry point 
 *@n: arg one
 *@m: arg two
 *Return: number of bit transformation
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, res;

	res = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			res++;
	return (res);
}
