#include "main.h"

/**
 * _strncat - concatenate two strings
 * it will use at most n bytes from src
 * @dest: first value
 * @src: second value
 * @n: input value
 *
 * Return: 0
 */

char *_strncat(char *dest, char*src, int n)
{	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k <n && src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

