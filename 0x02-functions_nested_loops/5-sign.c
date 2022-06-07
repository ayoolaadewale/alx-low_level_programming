#include "main.h"

/**
 *print_sign - Entry point
 *@n: Parameter to be checked
 *Return: Values to be returned based on outputs
 */

int print_aign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}
