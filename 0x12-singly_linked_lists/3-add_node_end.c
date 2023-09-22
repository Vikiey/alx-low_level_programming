#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: beginning of linked list
 * @str: input string
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *end, *new;

	while (str[len] != '\0') /* calculates length of string */
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str); /* duplicates input string */
	new->len = len; /* sets length of string */

	new->next = NULL; /* initialize new pointer of new node to NULL */

	if (*head == NULL) /** if head is NULL, new node becomes head */
		*head = new;
	else
	{
		end = *head; /* points to first node */
		while (end->next != NULL) /* transverse to end of list */
			end = end->next;
		end->next = new; /* point to new node hence adds it to end of list */
	}

	return (new);
}
