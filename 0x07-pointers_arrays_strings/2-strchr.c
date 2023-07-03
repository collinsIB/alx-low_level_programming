#include "main.h"
#include "stddef.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: first occurence of the character
 *
 * Return:pointer to the first occurence
 * or NULL if the charcter is not found
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
