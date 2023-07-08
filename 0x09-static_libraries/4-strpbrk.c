#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string
 * @s: string to search
 * @accept: bytes in the string
 *
 * Return: a pointer to the byte
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
