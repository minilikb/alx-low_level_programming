#include "holberton.h"

/**
 * create_array - creates an array of given size
 * @size: arrat size
 * @c: initial value
 *
 * Return: pointer to allocated space
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int counter;

	array = malloc(sizeof(char) * size);
	if (array == NULL || size == 0)
		return (NULL);
	for (counter = 0; counter < size; counter++)
		array[counter] = c;
	return (array);
}
