#include "main.h"

/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: pointing to the binary to convert
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num << 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
