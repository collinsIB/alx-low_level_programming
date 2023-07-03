#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - functions that prints the sum of two diagonals
 * of a square  matrix of integars
 * @a: integars
 * @size: size of integars
 *
 * Return: sum
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
