#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the first node of the list
 *
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;

	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		count++;
	}

	*h = NULL;

	return (count);
}
