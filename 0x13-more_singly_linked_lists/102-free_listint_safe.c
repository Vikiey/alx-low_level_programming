#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: pointer to pointer to linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *new;

	size_t size = 0;

	temp = *h;

	if (*h == NULL)
		return (0);
	while (*h != NULL)
	{
		new = temp->next;
		free(temp);
		temp = new;
		size++;
	}
	*h = NULL;

	return (size);
}
