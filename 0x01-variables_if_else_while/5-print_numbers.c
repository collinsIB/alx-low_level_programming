#include <stdio.h>

/**
  * main -  prints all single digit numbers of 0 to 9
  *
  * Return: 0 (Success)
  */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
