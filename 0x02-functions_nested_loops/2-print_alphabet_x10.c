#include "main.h"


/**
 * print_alphabet_10x - prints 10 times the alphabet, in lowercase,
 *
 * Return: 0
 *
 */

void print_alphabet_10x(void)
{
	char ch;
	int l;


	l = 0;


	while (l < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		l++;
	}
}
