#include "lists.h"

/**
 * pop_listint - functions that deletes the head of a node
 * @head: double pointer to head
 *
 * Return: the head node's data (n), 0r 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
