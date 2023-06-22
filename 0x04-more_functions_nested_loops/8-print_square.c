#include "main.h"

/**
 * print_square - Prints a squares
 * followed by a new line
 * @size: size of square to print
 * Return: 0
 */

void print_square(int size)

{

	int x, d;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (d = 0; d < size; d++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
