#include "holberton.h"

/**
 * more_numbers - prints sequence from 0 to 14 10 times
 *
 * Return: (void)
 *
 */

void more_numbers(void)
{
	int n;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if ((n / 10) > 0)
				_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		i++;
		_putchar('\n');
	}
}
