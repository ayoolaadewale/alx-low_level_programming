#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: count of args
 *@argv: array of args
 *Return: zero
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	count = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", count);
	return (0);
}
