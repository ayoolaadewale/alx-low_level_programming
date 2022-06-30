#include "main.h"
#include <stdlib.h>

/**
 *_strdup - entry point
 *@str: arg one
 *Return: pointer to array or null
 */

char *_strdup(char *str)
{
	char *stup;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	stup = malloc(sizeof(*str) * i);
	if (stup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		stup[j] = str[j];
		j++
	}
	return (stup);
}
