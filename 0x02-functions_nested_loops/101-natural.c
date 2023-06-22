#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  *
  * Return: Always (Success)
  */
int main(void)
{
	int l, k = 0;

	while (l < 1024)
	{
		if ((l % 3 == 0) || (l % 5 == 0))
		{
			k += l;
		}

		l++;
	}

	printf("%d\n", k);
	return (0);
}
