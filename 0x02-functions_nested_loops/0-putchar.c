#include "main.h"

/**
 *main - Entry point
 *Return: Zero at the end
 */

int main(void)
{
	int c;
	char value[] = "_putchar";

	for (c = 0; c < 8; c++)
	{
		_putchar(value[c]);
	}
	_putchar('\n');
	return (0);
}
