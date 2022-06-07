#include <ctype.h>
#include "main.h"

/**
 *_isalpha - Entry point
 *@c: character to be checked
 *Return: Value ot be returned at the end
 */

int _isalpha(int c)
{
	int r;

	r = isalpha(c);

	if (r == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
