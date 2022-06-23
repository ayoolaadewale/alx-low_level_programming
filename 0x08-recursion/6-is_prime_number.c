#include "main.h"

/**
 *find_prime - Entry point for first function
 *@n: argument one
 *@x: argument two
 *Return: value
 */

int find_prime(int n, int x)
{
	x = 2;

	if (n % x != 0)
		return (1);
	if (n % x == 0)
		return (0);
	return (find_prime(n, x + 1));
}

/**
 *is_prime_number - main function to check if n is prime or not
 *@n: value to be checked
 *Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (find_prime(n, 2));
}
