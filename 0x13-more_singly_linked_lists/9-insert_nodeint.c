#include "lists.h"

/**
 * *insert_nodeint_at_index - a function rhat
 * inserts a new node at a given position
 * @head: pointer to pointer to linked list
 * @idx: index of the list where the new node should be added
 * @n: type int data
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert, *point;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	insert = malloc(sizeof(listint_t));

	if (insert == NULL)
		return (NULL);

	insert->n = n;

	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
		return (insert);
	}

	point = *head;

	while (counter < idx - 1 && point != NULL)
	{
		point = point->next;
		counter++;
	}

	if (point == NULL)
	{
		free(insert);
		return (NULL);
	}
	insert->next = point->next;
	point->next = insert;

	return (insert);
}
