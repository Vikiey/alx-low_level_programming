#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list
 * @head: pointer to pointer to list
 * Aindex: index of the node that should be deleted
 * Return: 1 (success) otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *point, *p;
	unsigned int counter= 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
		return (1);
	}

	point = *head;
	p= NULL;
	while (point != NULL && counter < index)
	{
		p = point;
		point = point->next;
		counter++;
	}
	if (point == NULL)
		return (-1);
	p->next = point->next;
	free(point);
	return (1);
}
