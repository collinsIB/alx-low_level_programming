#include "main.h"

/**
 * _isalpha -checks alphabetic character
 * @c: is the character to check
 *
 * Return: 1 if c is a letter, low or upper,0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
