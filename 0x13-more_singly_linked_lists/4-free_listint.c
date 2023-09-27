#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to linked list
 */
void free_listint(listint_t *head)
{
	listint_t *lis;

	while (head != NULL)
	{
		lis = head;
		head = head->next;
		free(lis);
	}
	free(head);
}
