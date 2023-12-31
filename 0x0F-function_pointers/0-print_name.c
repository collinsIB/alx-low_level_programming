#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function hat prints a name
 * @name: name to print
 * @f: function character
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
