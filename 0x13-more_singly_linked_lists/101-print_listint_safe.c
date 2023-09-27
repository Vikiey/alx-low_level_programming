#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to linked list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *first, *second;
	size_t node = 0;

	first = head;
	second = head;

	if (head == NULL)
		exit(98);

	while (first != NULL && second != NULL && second->next != NULL)
	{
		first = first->next;
		second = second->next->next;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;

		/*first = first->next;
		second = second->next->next; */
		if (first == second)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}

	return (node);
}
