#include <stdio.h>

/**
 *main - Entry point
 *Return: zero at the end
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
