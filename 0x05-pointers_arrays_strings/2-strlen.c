#include "main.h"
#include <stdio.h>

/**
 *_strlen - Entry point
 *@s: Parameter
 *Return: Length of array
 */

int _strlen(char *s)
{
	int array_length = 0;

	while (*s != '\0')
	{
		s++;
		array_length++;
	}
	return (array_length);
}
