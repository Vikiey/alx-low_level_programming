#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: beginning of linked list
 * @str: input string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str); /* duplicate the string */

	new->next = *head; /* set head as next pointer of new node */

	*head = new; /* update head to point to new node */

	return (new);
}

int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	print_list(head);
	return (0);
}
