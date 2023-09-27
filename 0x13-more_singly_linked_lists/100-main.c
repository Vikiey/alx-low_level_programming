#include "lists.h"

/**
 * main - check the code
 * Return: 0
 */

int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 98);
	print_listint(head);
	reverse_listint(&head);
	print_listint(head);
	free_listint2(&head);
	return(0);
}
