#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: beginning of list
 */

void free_list(list_t *head)
{
	list_t *temp; /* temporary pointer */

	while (head != NULL)
	{
		temp = head;
		head = head->next; /* points to next node */
		free(temp->str);
		free(temp);
	}
}
