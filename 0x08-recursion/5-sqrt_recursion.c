#include "main.h"

/**
 *find_root - Entry point for the first function to find the actual root
 *@n: number to get the root
 *@root: root to check out
 *Return: root value
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (find_root(n, root + 1));
}

/**
 *_sqrt_recursion - entry point to find a sqaure root
 *@n: argument
 *Return: value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
