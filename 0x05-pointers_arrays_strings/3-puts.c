#include "holberton.h"

/**
 * _puts - prints out a string with newline
 * @str: string which to be printed
 *
 * Return: (void)
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
