#include "holberton.h"

/**
 * _puts_recursion - prints our a string using recursion
 * @s: the pointer to the string
 *
 * Return: (void)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
