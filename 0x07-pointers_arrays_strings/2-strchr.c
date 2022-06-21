#include "main.h"
#include <stddef.h>
#define NULL 0

/**
 *_strchr - Entry point
 *@s: parameter
 *@c: parameter
 *Return: value
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
