#include "holberton.h"

/**
 * print_rev - prints out the specified string in reverse
 * @s: string which is to be printed in reverse
 *
 * Return: (void)
 */

void print_rev(char *s)
{
	int size = 0;
	int counter = size;
	char *t = s;

	while (*t)
	{
		size++;
		t++;
	}
	counter = size;
	for (counter = size - 1; counter >= 0; counter--)
	{
		_putchar(*(s + counter));
	}
	_putchar('\n');
}
