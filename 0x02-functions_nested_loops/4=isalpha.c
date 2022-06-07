#include <ctype.h>
#include "main.h"

/**
 *_isalpha - Entry point
 *@c: Parameter to be checked
 *Return: Value to be returned based on the output
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
