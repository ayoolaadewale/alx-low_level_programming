#include "main.h"
#include <stdlib.h>

/**
 *print_last_digit - Entry point
 *@r: parameter to be checked
 *Return: value to be returned
 */

int print_last_digit(int r)
{
	if (r < 0)
		r *= -1;

	_putchar('0' + (r % 10));

	return (r % 10);
}
