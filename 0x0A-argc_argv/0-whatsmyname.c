#include <stdio.h>
#include "main.h"

/**
 *main - entry point
 *@argc: argument count
 *@argv: array of argument
 *Return: zero
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("\%s\.\n", *argv);
	return (0);
}
