#include "main.h"
#include <stdlib.h>

/**
 *_calloc - entry point
 *@nmemb: arg one
 *@size: arg two
 *Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pp;
	unsigned int i;

	if (nmbemb <= || size <= 0)
		return (NULL);

	pp = malloc(nmemb * size);
	if (pp == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)pp + 1) = 0;

	return (pp);
}
