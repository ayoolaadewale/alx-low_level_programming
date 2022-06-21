#include "main.h"
#include <stddef.h>

/**
 *_strchr - Entry point
 *@s: parameter
 *@c: parameter
 *Return: value
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
		else
			return (NULL);
	}
	return (0);
}
