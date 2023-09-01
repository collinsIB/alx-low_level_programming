#include "main.h"

/**
 * get_endianness - function that checks the endianness of the system
 * Return: result
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
