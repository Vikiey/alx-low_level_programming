#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *end = NULL;
	listint_t *start = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		end = (*head)->next;
		(*head)->next = start;
		start = *head;
		*head = end;
	}

	*head = start; /* head points to start (formerly last node */

	return (*head);
}
