#include "main.h"

/**
 *_strcmp - Entry point
 *@s1: parameter one
 *@s2: parameter two
 *Return: Zero
 */

int _strcmp(char *s1, char *s2)
{
	int difference = 0;

	while (difference == 0)
	{
		difference = *s1 - *s2;

		if (*s1 == '\0' || *s2 == '\0')
			break;
		s1++;
		s2++;
	}
	return (difference);
}
