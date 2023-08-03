#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * @b: the binary to be converted
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int cnum = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		cnum = cnum * 2 + (b[i] - '0');
	}

	return (cnum);
}
