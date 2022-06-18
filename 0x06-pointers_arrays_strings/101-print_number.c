#include "main.h"

/**
 *print_number - entry point
 *@n: parameter
 */

void print_number(int n)
{
	unsigned int number;

	if (n < 0)
	{
		_putchar('-');
		number = -n;
	}
	else
	{
		numer = n;
	}
	if (number / 10)
		print_number(num / 10);
	_putchar((number % 10) + '0');
}
