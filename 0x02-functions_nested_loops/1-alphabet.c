#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: 0.
 *
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
