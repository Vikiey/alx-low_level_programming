#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to pointer to list
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL || *head == NULL)
		return;
	whilw (*head != NULL)
	{
		list = *head;
	}
}
