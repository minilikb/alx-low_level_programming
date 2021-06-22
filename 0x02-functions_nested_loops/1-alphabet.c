#include "holberton.h"

/**
 * print_alphabet - Print alphabet
 *
 * Return: (void)
 *
 */

void print_alphabet(void)
{
	char sh = 'a';

	while (sh <= 'z')
	{
		_putchar(sh);
		sh++;
	}
	_putchar('\n');
}
