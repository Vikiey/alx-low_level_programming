#include "lists.h"

/**
 * *add_nodeint - adds a new node at the
 * beginning of a listint_t list
 * @head: pointer to pointer to head of list
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = *head; /* assign next of new node as head */

	*head = new_n; /* new_n is at the beginning */

	return (new_n);
}
