#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * if n is lower than 0, return -1 to indicate error
 * @n: given  number
 *
 * Return: result
 */

int factorial(int n)
{
	int i;
	int result;

	if (n < 0)

	{
		return (-1);
	}
	result = 1;

	for (i = 1; i <= n; i++)
	{
		result *= i;
	}
	return (result);
}
