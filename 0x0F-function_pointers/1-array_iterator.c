#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints array elemnets
 * @array: array to print
 * @size: size of element to print
 * @action: pointer to print
 * Return: 0
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int s;

	if (array == NULL || action == NULL)
		return;

	for (s = 0; s < size; s++)
	{
		action(array[s]);
	}
}
