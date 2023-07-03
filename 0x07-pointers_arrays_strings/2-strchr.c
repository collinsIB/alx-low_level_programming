#include "main.h"
#include "stddef.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: first occurence of the character
 * @NULL: if the character is not found
 *
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')

	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
