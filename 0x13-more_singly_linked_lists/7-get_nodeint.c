#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node
 * of a listint_t linked list
 * @head: linked list
 * @index: index of the node, starting at 0
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}

	return (NULL);
}
