#include "main.h"
#include <stdio.h>

/**
 *_isupper - Entry point
 *@c: Parameter text
 *Return: zero at the end
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
