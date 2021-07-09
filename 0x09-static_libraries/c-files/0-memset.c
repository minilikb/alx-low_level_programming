#include "holberton.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer memory area
 * @b: byte to fill
 * @n: selector number
 *
 * Return: the pointer used
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
