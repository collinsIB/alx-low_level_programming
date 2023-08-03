#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: the bit number
 * @index: the given index
 *
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
