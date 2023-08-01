#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head
 * @idx: index of the list
 * @n: data for the new node
 *
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;

	unsigned int d;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	temp = *head;

	for (d = 0; d < idx - 1 && temp != NULL; d++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	new_node =  malloc(sizeof(listint_t));

	if (new_node == NULL)

		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

