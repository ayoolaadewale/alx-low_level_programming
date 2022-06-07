#include "main.h"
#include <ctype.h>

/**
 *_islower - Entry point
 *@c: character to check
 *Return: 1 if its lowercase, 0 if its uppercase
 */

int _islower(int c)
{
	int r;

	r = islower(c);

	if (r > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
