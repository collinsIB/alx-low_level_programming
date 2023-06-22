#include "main.h"

/**
 * times_table - prints 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int i, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			l = i * k;
			if (k == 0)
			{
				_putchar('0')
			}
			else if (l <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
				
			}
			_putchar('\n');
		}
	}
}
