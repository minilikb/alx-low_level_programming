#include "function_pointers.h"

/**
 * print_name - prints out a name using a given callback
 * @name: name to print
 * @f: function callback
 *
 * Return: (void)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
