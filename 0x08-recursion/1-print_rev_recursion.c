#include "main.h"

/**
 *_print_rev_recursion - entry point
 *@s: argument
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
