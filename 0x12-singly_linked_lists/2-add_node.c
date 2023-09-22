#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: beginning of linked list
 * @str: input string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = len;
	new->str = strdup(str); /* duplicate the string */
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = *head; /* set head as next pointer of new node */

	*head = new; /* update head to point to new node */

	return (new);
}
