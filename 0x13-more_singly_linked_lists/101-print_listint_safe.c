#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts number of unique codes
 * @head: a pointer to the head
 *
 * Return: if the list is not looped 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *c, *b;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	c = head->next;
	b = (head->next)->next;

	while (b)
	{
		if (c == b)
		{
			c = head;

			while (c != b)
			{
				nodes++;
				c = c->next;
			}

			return (nodes);
		}

		c = c->next;
		b = (b->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	const listint_t *slow, *fast;

	if (!head)
		exit(98);

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	return (count);
}
