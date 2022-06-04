#include <stdio.h>

/**
 *main - Entry point
 *Return: Zero at the end
 */

int main(void)
{
	int hundred;
	int tens;
	int unit;

	for (hundred = 0; hundred <= 9; hundred++)
	{
		for (tens = hundred + 1; tens <= 9; tens++)
		{
			for (unit = tens + 1; unit <= 9; unit++)
			{
				putchar(hundred + '0');
				putchar(tens + '0');
				putchar(unit + '0');

				if (hundred < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
