#include "main.h"

/**
 *print_alphabet - Entry point
 *Return: zero at the end
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
