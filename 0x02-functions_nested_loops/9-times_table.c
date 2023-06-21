#include "main.h"

/**
 * times_table - prints 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int i, k, l;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			l =  k * i;
			if (k == 0)
			{
				_putchar(l + '0');
			}

			if (l < 10 && k != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			} else if (l > 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
