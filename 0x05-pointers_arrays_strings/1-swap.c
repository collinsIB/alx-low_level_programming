#include "stdio.h"

/**
 * swap_int - swaps the values of two integars
 * @a: first integar
 * @b: second integar
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
