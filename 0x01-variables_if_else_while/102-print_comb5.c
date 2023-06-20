#include <stdio.h>

/**
  * main - Prints the numbers from 00 to 99
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int c, n;

	c = n = '0';

	for (c = '0'; c <= '9'; c++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			putchar(c);
			putchar(n);

			if ((c != '9') || (c == '9' && n != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
