#include "main.h"
#include <stdlib.h>

/**
 *str_concat - entry point
 *@s1: arg one
 *@s2: arg two
 *Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *stup;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	stup = malloc(sizeof(char) * (i + j + 1));
	if (stup == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		stup[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		stup[i] = s2[j];
		i++, j++;
	}
	stup[i] = '\0';
	return(stup);
}
