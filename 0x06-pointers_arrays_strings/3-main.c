#include "main.h"
#include <stdio.h>

/**
 *main - entry point
<<<<<<< HEAD
 *Return: Zero
=======
 *Return: zero
>>>>>>> 341b7bf7b5c89dc1ba8f31ad777161f11264d7c2
 */

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

<<<<<<< HEAD
	printf("%d\n", _strcmp(s1, s2);
	printf("%d\n", _strcmo(s2, s1);
	printf("%d\n", _strcmp(s1, s1);
=======
	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
>>>>>>> 341b7bf7b5c89dc1ba8f31ad777161f11264d7c2
	return (0);
}
