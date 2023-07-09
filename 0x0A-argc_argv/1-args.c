#include <stdio.h>
#include "main.h"

/**
 * main - print of argument passed to the program
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv; /*ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
