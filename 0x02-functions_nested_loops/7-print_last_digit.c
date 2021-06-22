#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : integer value
 * Return: returns last digit of n
 *
 */

int print_last_digit(int n)
{
	if ((n % 10) >= 0)
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
	else
	{
		_putchar('0' + (-1 * (n % 10)));
		return ((-1 * (n % 10)));
	}
}
