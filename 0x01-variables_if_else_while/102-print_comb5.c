#include <stdio.h>

/**
 *main - Entry point
 *Return: zero at the end
 */

int main(void)
{
	int tens;
	int unit;

	for (tens = 0; tens < 100; tens++)
	{
		for (unit = tens + 1; unit < 100; unit++)
		{
			putchar(tens / 10 + '0');
			putchar(tens % 10 + '0');
			putchar(' ');
			putchar(unit / 10 + '0');
			putchar(unit % 10 + '0');

			if (!(tens == 98 && unit == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
