#include <stdio.h>

/**
 *main - Entry point
 *Return: zero at the end
 */

int main(void)
{
	char c;

	for (c = 'a'; c = 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
