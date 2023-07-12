#include <stdlib.h>
#include <string.h>

/**
 * argstostr -  a function that concatenates all the arguments of your program
 * Returns NULL if ac == 0 or av == NULL
 * Each argument should be followed by a \n in the new string
 * @ac:input value
 * @av:input character
 *
 * Return: NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int c, v, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (c = 0; c < ac; c++)
		len += strlen(av[c]) + 1;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (c = 0; c < ac; c++)
	{
		for (v = 0; av[c][v] != '\0'; v++)
			str[k++] = av[c][v];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
