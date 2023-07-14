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
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
