#include "main.h"

/**
 *_memcpy - Entry point
 *@dest: Parameter
 *@src: parameter
 *@n: parameter
 *Return: value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
