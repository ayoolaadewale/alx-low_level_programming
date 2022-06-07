#include "main.h"
#include <ctype.h>

/**
 *_islower - Entry point
 */

int _islower(int c)
{
	int r;

	r = islower(c);

	if (r > 0)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return 0;
}
