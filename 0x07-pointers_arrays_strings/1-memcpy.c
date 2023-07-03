#include "main.h"

/**
 * _memcpy - funcion that copies memory area
 * @dest: memory area
 * @src: bytes from memory area
 * @n: integar
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
