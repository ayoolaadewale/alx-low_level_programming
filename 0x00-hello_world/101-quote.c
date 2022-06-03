#include <stdio.h>
#include <unistd.h>

/**
 *main - Print out without using print and put
 *Return: one at the end
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
