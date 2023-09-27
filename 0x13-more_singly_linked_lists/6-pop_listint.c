#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked
 * list and returns the head node’s data (n)
 * @head: pointer to pointer to a list
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *list;
	int u;

	list = *head;

	if (head == NULL || *head == NULL)
		return (0);

	*head = (*head)->next;
	u = list->n;
	free(list);

	return (u);
}
