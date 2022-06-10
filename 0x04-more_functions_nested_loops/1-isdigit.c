#include "main.h"

/**
 *_isdigit - Entry point
 *@c: Parameter to be checked
 *Return: Zero at the end
 */

int _isdigit (int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);

}
