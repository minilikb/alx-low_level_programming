#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet
 *
 * Return: (void)
 *
 */

void print_alphabet_x10(void)
{
	char data = 'a';
	int counter = 1;

	while (counter <= 10)
	{
		while (data <= 'z')
		{
			_putchar(data);
			data++;
		}
		data = 'a';
		_putchar('\n');
		counter++;
	}
}
