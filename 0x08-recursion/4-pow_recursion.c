#include "main.h"

/**
 *_pow_recursion - entry point
 *@x: argument one
 *@y: argument two
 *Return: value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else
	{
		return (x * _pow_recursion(x, y - 1));
		y--;
	}
}
