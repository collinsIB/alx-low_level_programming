#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns natural square of a number
 * @n: number to calculate
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);
	return (actual_sqrt_recursion(n, 0));

}
/**
 * actual_sqrt_recursion - recursesnto find the natural
 * square root of a number
 * @n: the sqaure root number
 * @i: iterator
 *
 * Return: the sqaure root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}
