#include "main.h"

/**
 * _memset - function that fills the memory with a constant byte
 * @s: memory area
 * @b: the connstant byte
 * @n: bytes of memory
 *
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);

}

