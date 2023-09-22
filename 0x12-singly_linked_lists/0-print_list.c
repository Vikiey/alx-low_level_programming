#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to linked list
 * Return: the number of nodes else if NULL print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0; /* initialize node count */

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
