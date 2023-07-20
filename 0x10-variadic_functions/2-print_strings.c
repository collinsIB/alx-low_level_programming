#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - functions that prints strings, followed by a new line
 * @separator: strings to be printed between the strings
 * @n: number of strings to be printed
 *
 * Return: 0)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		printf("%s", (str != NULL) ? str : "(nil)");
		if (separator != NULL && i < n - 1)

			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
