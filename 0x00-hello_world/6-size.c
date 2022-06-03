#include <stdio.h>

/**
 *main - print size out 
 *Return: zero at the end
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
