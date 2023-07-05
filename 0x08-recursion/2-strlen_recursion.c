#include <stdio.h>

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string value
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
