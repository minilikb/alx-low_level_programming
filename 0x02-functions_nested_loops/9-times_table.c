#include "holberton.h"

/**
 * times_table - prints time table
 *
 * Return: (void)
 *
 */

void times_table(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			if (((x * y) / 10) > 0)
				_putchar('0' + ((x * y) / 10));
			else if (x > 0)
				_putchar(' ');
			_putchar('0' + ((x * y) % 10));
			if (x < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
