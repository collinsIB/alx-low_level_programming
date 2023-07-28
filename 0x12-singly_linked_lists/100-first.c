#include <stdio.h>

/**
 * premain - prpints a string before main is executed.
 */
void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
/**
 * first - main function
 *
 * Return: 0
 */

int first(void)
{
	return (0);
}
