#include "main.h"

/**
 *_memset - Entry point
 *@s: Parameter one
 *@b: parameter two
 *@n: parameter two
 *Return: value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
