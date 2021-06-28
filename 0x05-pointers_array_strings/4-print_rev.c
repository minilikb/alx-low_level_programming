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
	char *t = s;

	while (*s)
	{
		size++;
		s++;
	}
	while (size >= 0)
	{
		_putchar(*(t + size));
		size--;
	}
	_putchar('\n');
}
