#include "holberton.h"

/**
 * malloc_checked - creates int and allocates memory
 * @b: initeger value
 *
 * Return: pointer to allocated space
 */

void *malloc_checked(unsigned int b)
{
	void *address;

	address = malloc(b);

	if (address == NULL)
		exit(98);
	return (address);
}
