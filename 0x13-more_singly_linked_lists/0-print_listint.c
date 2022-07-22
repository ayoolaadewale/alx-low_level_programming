#include "lists.h"
#include <stdio.h>

/**
 *print_listint - entry point
 *@h: argn onw
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
