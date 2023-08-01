#include "lists.h"
/**
 * add_nodeint -adds a new node at the beginning of a listint_t list
 * @head: double pointer to the head
 * @n: data for the new node
 *
 * Return: the address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
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
	listint_t *new;

	listint_t *temp = *head;

	unsigned int d = 0;

	if (idx == 0)
		return (add_nodeint(head, n));

	while (temp != NULL && d < idx - 1)
	{
		temp = temp->next;
		d++;
	}

	if (temp == NULL)
		return (NULL);

	new =  malloc(sizeof(listint_t));

	if (new == NULL)

		return (NULL);

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}

