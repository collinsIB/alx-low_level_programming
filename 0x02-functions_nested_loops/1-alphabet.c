#include "main.h"

/**
 * main - entry level print alphabet in lowercase
 * created by obi
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
