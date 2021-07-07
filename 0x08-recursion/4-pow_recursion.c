#include "holberton.h"

/**
 * _pow_recursion - returns x raised to y
 * @x: the number to be raised
 * @y: the exponent
 *
 * Return: factorial of n
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
