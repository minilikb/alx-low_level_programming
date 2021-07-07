#include "holberton.h"

/**
 * _print_rev_recursion - prints out a string in reverse using recursion
 * @s: the pointer to the string
 *
 * Return: (void)
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
		return;

	_putchar(*s);
}
