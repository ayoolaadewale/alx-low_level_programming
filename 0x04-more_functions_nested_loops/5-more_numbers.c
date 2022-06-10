#include "main.h"

/**
 *more_numbers - Entry point
 *@c: paramter one
 *@d: paramter two
 */

void more_numbers(void)
{
	int c;

	int d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
			{
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
			}
			else
			{
				_putchar(d + '0');
			}
		}
		_putchar('\n');
	}
}
