#include <stdio.h>

/**
  * main - Prints combination of two digits
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int c, n;

	for (c = '0'; c <= '9'; c++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (c < n)
			{
				putchar(c);
				putchar(n);

				if (c != '8' || (c == '8' && n != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
