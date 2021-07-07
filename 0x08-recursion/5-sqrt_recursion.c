#include "holberton.h"

/**
 * _sqrt_recursion - returns square root of a number
 * @n: the number
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n % 2 == 0)
		return (2 + _sqrt_recursion(n / 2));
	else if (n % 3 == 0)
		return (3 + _sqrt_recursion(n / 3));
	else if (n % 5 == 0)
		return (5 + _sqrt_recursion(n / 5));
	else if (n % 6 == 0)
		return (6 + _sqrt_recursion(n / 6));
	else if (n == 1)
		return (0);
	else
		return (-1);
}
