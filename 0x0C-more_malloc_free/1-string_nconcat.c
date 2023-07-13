#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - function that concatenate two strings
 * @s1: first strings
 * @s2: second strings
 *
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2)
{
	char *conc;
	int j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = k = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;

	conc = malloc(sizeof(char) * (j + k + 1));

	if (conc == NULL)
		return (NULL);
	j = k = 0;
	while (s1[j] != '\0')
	{
		conc[j] = s1[j];
			j++;
	}
		while (s2[k] != '\0')
		{
			conc[j] = s2[k];
			j++, k++;
		}
		conc[j] = '\0';
		return (conc);
}

