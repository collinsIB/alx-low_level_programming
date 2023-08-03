#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @index: the given index in c
 * @n: the bit value
 *
 * Return: the value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
		return (-1);

	return ((n >> index) & 1);
}
