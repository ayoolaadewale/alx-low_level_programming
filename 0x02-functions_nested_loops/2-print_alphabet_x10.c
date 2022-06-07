#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 */

void print_alphabet_x10(void)
{
	int times; 
	int c;

	for (times = 1; times < 11; times++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
