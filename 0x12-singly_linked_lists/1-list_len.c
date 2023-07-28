#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer to the head
 *
 * Return: number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
