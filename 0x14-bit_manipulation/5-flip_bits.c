#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: number of bits
 * @m: integer value
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int c = 0;

	while (x)
	{
		c += x & 1;
		x >>= 1;
	}

	return (c);
}
