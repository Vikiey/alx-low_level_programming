#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to linked lists
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}

	return (0);
}
