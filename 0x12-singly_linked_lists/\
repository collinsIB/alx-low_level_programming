#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list_t list
 * @head: double pointer to the head
 * @str: string to be added
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int len = 0;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = *head;
	*head = n;

	return (n);
}
