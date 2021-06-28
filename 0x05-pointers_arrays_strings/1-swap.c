#include "holberton.h"

/**
 * swap_int - exchanges values of pointed variables
 * @a: the pointer to the value to be changed
 * @b: the pointer to the value to be changed
 *
 * Return: (void)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
