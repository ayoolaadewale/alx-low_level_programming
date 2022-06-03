#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Zero at the end
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int n_modulo = n % 10;

	if (n_modulo == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n_modulo);
			
	}
	else
	{
		if (n_modulo > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, n_modulo);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_modulo);
	}
	return (0);
}
