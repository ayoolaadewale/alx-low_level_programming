#include "main.h"
#include <stdio.h>

/**
 *main - entry point
 *@argc: number of args
 *@argv: array of args
 *Return: zero
 */

int main(int argc, char *argv[])
{
	int i;

	for(i = 1; i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
