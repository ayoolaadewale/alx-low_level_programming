#include <stdio.h>

/**
 *main - Entry point
 *Return: Zero at the end
 */

int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c <= 9)
		{
			if (c % 3 == 0 && c % 5 == 0)
			{
				printf("FizzBuzz");
				putchar(' ');
			}
			else if (c % 5 == 0)
			{
				printf("Buzz");
				putchar(' ');
			}
			else if (c % 3 == 0)
			{
				printf("Fizz");
				putchar(' ');
			}
			else
			{
				putchar(c + '0');
				putchar(' ');
			}
		}
		else
		{
			if (c % 3 == 0 && c % 5 == 0)
			{
				printf("FizzBuzz");
				putchar(' ');
			}
			else if (c % 5 == 0)
			{
				printf("Buzz");
				putchar(' ');
			}
			else if (c % 3 == 0)
			{
				printf("Fizz");
				putchar(' ');
			}
			else
			{
				putchar(c + '0');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
