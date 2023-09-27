#include "lists.h"

/**
 * *find_listint_loop - finds the loop in a linked list
 * @head: linked list
 * Return: NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lazy = head;
	listint_t *quick = head;

	if (head == NULL)
		return (NULL);

	while (quick != NULL && quick->next != NULL)
	{
		lazy = lazy->next; /* lazy takes a step */
		quick = quick->next->next; /* quick, 2 steps */
	}
	if (lazy == quick)
	{
		lazy = head;
		while (lazy != quick)
		{
			lazy = lazy->next;
			quick = quick->next;
		}
		return (lazy);
	}
	return (NULL);
}
