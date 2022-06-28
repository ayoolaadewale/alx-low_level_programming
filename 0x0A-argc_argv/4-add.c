#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 *num_checker - entry point
 *@s: arg to be checked
 *Return: zero or one
 */

bool num_checker(char *s)
{
	int j;

	for (j = 0; s[j]; j++)
	{
		if (!(s[j] >= '0' && s[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 *main - entry point
 *@argc: count of ergs
 *@argv: array of args
 *Return: Zero
 */

int main(int argc, char *argv[])
{
	int i, count;
	int result = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (num_checker(argv[i]))
				result += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
		return (0);
	}
}
