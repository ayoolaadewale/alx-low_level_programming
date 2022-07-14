#include "lists.h"

/**
 *print_list - entry point
 *@h: arg one
 *Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
