#include "main.h"

/**
 *print_square - Entry point
 *@size: parameter to be checked
 */

void print_square(int size)
{
	int c, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < n; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
