#include "lists.h"

/**
 * sum_listint - returns the summ all the data (n)
 * @head: pointer to the head
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
