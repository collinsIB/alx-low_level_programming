#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum values
 * @max: maximm values
 *
 * Return: to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		arr[i] = min + 1;
	return (arr);
}
