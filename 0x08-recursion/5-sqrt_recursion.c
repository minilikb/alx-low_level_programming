#include "holberton.h"
int root(int, int);
/**
 * _sqrt_recursion - returns square root of a number
 * @n: the number
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (root(n, (n + 1) / 2));
}

/**
 * root - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int root(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (root(n, i - 1));
}
