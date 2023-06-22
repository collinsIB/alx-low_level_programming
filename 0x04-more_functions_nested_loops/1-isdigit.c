#include "main.h"

/**
 * _isdigit - check if a char is a digit
 * @c: the number to check
 *
 * Return: 1 for a character that will be a digit or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
