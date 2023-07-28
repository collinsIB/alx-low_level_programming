#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head
 * @str: string to be added
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[len])
		len++;

	node->str = strdup(str);
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		temp = *head;

		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}

	return (node);
}
