#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: pointer to pointer to linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *new;

	size_t size = 0;

	if (*h == NULL)
		return (0);
	while (*h != NULL)
	{
		new = (*h)->next; /* temporary stores next node */
		if (new == NULL/* || new >= *h*/)
		{
			size++;
			free(*h); /* free current nide */
			*h = NULL; /* indicates a free list*/
			break;
		}

		size++;
		free(*h);
		*h = new; /* set pointer to next node in list */
	}

	return (size);
}
