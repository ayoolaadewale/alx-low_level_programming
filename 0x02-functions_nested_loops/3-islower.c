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
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
