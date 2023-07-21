#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed into function
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				separator = ", ";
				break;
			case 's':
				{
					char *str = va_arg(args, char*);

					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					separator = ", ";
					break;
				}
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
