#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  a function that concatenates two strings
 * the returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *c_str;
	int len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	c_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (c_str == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(c_str, s1);
	if (s2 != NULL)
		strcpy(c_str + len1, s2);

	return (c_str);
}
