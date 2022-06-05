#include <stdio.h>

/**
 *main - Entry point
 *Return: zero at the end
 */

int main(void)
{
	int tens;
	int unit;
	int tent;
	int unitt;

	for (tens = 0; tens <= 9; tens++)
	{
		for (unit = 0; unit <= 9; unit++)
		{
			for (tent = tens; tent <= 9; tent++)
			{
				for (unitt = unit + 1; unitt <=9; unitt++)
				{
					putchar(tent + '0');
					putchar(unit + '0');
					putchar(' ');
					putchar(tent + '0');
					putchar(unitt + '0');

					if (!((tens == 9 && unit == 8) && (tent == 9 && unitt == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
				unitt = 0;
			}

		}
	}
	putchar('\n');
	return (0);
}
