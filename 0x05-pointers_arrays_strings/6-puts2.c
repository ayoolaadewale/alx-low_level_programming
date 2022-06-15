#include "main.h"
#include <stdio.h>

/**
 *puts2 - Entry point
 *@str: Parameter
 */

void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;

	for (z = 0; z <= l; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
