#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to list
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t x;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}

	return (x);
}
