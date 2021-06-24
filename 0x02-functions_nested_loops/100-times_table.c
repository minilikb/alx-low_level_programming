#include "holberton.h"

/**
 * print_times_table - prints time table
 * @n: integer value
 * Return: (void)
 *
 */

void print_times_table(int n)
{
	int x, y;

	if (n <= 15 && n >= 0)
	{
	for (y = 0; y <= n; y++)
	{
		for (x = 0; x <= n; x++)
		{
			int product = x * y;
			int []digits;

			while (product)
			{
				int i = sizeof(digits) / sizeof(digits[0]);
				products[i + 1] = product / 10;
				product /= 10;
			}
			for
			(
			int i = (sizeof(digits) / sizeof(digits[0]));
			i >= 0;
			i--
			)
			{
				putchar('0' + digits[i]);
				putchar(',');	
			}
		}
		_putchar('\n');
	}
	}
}
