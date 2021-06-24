#include "holberton.h"

/**
 * print_line - prints out a line
 * @n: the line length
 * Return: (void)
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
