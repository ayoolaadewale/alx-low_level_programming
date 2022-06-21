#include "main.h"

/**
 *_strspn - entry point
 *@s: parameter
 *@accept: parameter
 *Return: value
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int length = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (length);
		}
		i++;
	}
	return (length);
}
