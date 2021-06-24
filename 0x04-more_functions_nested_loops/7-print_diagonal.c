#include "holberton.h"

/**
 * print_diagonal - prints out a diagonal line
 * @n: the line length
 * Return: (void)
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < n; j++)
		{
		for (i = 0; i < n; i++)
		{
			if (i == j)
			{
				_putchar('\\');
				break;
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
		}
	}
}
