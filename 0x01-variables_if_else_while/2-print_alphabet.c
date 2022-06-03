#include <stdio.h>

/**
 *main - Entry point
 *Return: Zero at the end
 */

int main(void)
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		putchar(tolower(i));
	}
	return (0);
}
