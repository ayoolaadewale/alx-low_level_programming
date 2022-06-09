#include <stdio.h>

/**
 *main - Entry point
 *Return: Zero at the end
 */

int main(void)
{
	int n, value = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			value = value + n;
		}
	}
	printf("%d", value);
	return (0);
}
