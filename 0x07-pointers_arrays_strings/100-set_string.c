#include "main.h"

/**
 * set_string - writes a function that sets the value
 * of a pointer to a char
 * @s: character value
 * @to: character value
 *
 * Return: char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
