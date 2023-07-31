#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer to the head
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;

	}

	return (len);
}
