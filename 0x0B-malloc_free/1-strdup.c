#include "holberton.h"

/**
 * _strdup - duplicate a string in memory
 * @str: the pointer to string
 *
 * Return: pointer to allocated space
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int counter, size;

	if (str == NULL)
		return (NULL);
	for (counter = 0; str[counter]; counter++)
	{
		size++;
	}
	counter = 0;
	array = malloc(sizeof(char) * (size + 1));
	if (array == NULL || size == 0)
		return (NULL);
	for (counter = 0; str[counter]; counter++)
		array[counter] = str[counter];
	array[size - 1] = '\0';
	return (array);
}
