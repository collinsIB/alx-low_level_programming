#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memmory
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: pointer to the duplicated string, or NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;

	new_str = malloc(sizeof(char) * (l + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		new_str[i] = str[i];
	new_str[l] = '\0';

	return (new_str);
}
