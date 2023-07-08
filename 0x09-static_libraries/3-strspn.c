#include "main.h"

/**
 * _strspn - function that locates a character in string
 * @s: string to search
 * @accept: characters to search for
 *
 * Return: the number of bytes in the initial segment of s
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			break;
		}
	}
	if (accept[j] == '\0')
	{
		return (i);
	}
	}
	return (i);
}
