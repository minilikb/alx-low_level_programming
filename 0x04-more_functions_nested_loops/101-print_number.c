#include "holberton.h"
#include <math.h>

/**
 * print_number - prints integer
 * @n: number to print
 * Return: (void)
 *
 */

void print_number(int n)
{
	int temp = n;

	if (temp < 0)
	{
	temp = -temp;
	_putchar('-');
	}
	if ((temp / 10) > 0)
		print_number(temp / 10);
	_putchar('0' + (temp % 10));
}
