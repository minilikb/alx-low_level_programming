#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string which is to be reversed
 *
 * Return: (void)
 */

void rev_string(char *s)
{
	int size = 0;
	int counter = 0;
	char *t = s;
	char *a = s;

	while (*t)
	{
		size++;
		t++;
	}
	while (size >= 0)
	{
		*(s + counter) = *(a + size);
		size--;
		counter++;
	}
}
