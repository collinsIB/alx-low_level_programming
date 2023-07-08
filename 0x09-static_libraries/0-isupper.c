#include "main.h"


/**
 * _isupper - function that checks for upper case char
 *
 * @c: the file to check
 * Return: 1 for uppercase or 0 for any else
 */

int _isupper(int c)
{
        if (c >= 65 && c <= 90)
        {
                return (1);
        }

        return (0);
}
