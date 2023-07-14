#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - function that concatenate two strings
 * @s1: first strings
 * @s2: second strings
 * @n: int value
 *
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n > len2)
		n = len2;
	conc = malloc(sizeof(char) * (len1 + n + 1));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		conc[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		conc[i] = s2[j];
	conc[i] = '\0';
	return (conc);
}
