#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the unsigned long int
 * @index: index of the bit you want to get
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
