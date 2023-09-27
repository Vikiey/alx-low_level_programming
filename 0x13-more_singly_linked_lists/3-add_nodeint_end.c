#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the
 * end of a listint_t list.
 * @head: pointer to pointer of a list
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *last;

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL) /* if list is empty, new node is head */
		*head = new_n;
	else
	{
		last = *head;
		while (last->next != NULL) /* traverse list to last node */
			last = last->next;
		last->next = new_n; /* make new node the last node */
	}

	return (new_n);
}
