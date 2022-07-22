#include "main.h"

/**
 *clear_bit - entry point
 *@n: arg one
 *@index: arg two
 *Return: one or minus one
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
