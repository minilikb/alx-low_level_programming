#include "holberton.h"

/**
 * print_sign - check if n is positive , negative or zero
 * @n : integer value
 * Return: 1 if n is positive, -1 if negative and 0 otherwise
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
