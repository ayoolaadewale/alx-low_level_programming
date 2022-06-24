#include "main.h"

/**
 *reverse_array - Entry point
 *@beginning: argument one
 *@end:argument two
 *Return: value
 */

int reverse_array(char *beginning, char *end)
{
	if (beginning >= end)
		return (1);
	if (*beginning == *end)
		return (compare(beginning + 1, end - 1));
	return (0);
}

/**
 *strn_length - get length of string
 *@s: argument one
 *Return:value
 */

int strn_length(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (str_length(s)));
}

/**
 *is_palindrome - Entry point
 *@s: argument to be chcked
 *Return: value
 */

int is_palindrome(char *s)
{
	int len = strn_length(s);

	return (reverse_array(s, (s + len - 1)));
}
