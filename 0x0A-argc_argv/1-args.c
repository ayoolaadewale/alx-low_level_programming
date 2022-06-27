#include <stdio.h>
#include "main.h"

/**
 *main - entry pint
 *@argc: argument count
 *@argv: array of args
 *Return: zero
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
