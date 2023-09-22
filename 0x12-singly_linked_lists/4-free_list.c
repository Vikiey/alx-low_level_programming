#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: beginning of linked list
 */

void free_list(list_t *head)
{
	list_t *d; /* a temporary pointer d */

	while (head != NULL)
	{
		d = head; /* store head in pointer d */
		head = head->next; /* points to next node */
		free(d->str);
		free(d);
	}
}
