#include "holberton.h"

/**
 * str_concat - concatenate given strings and assign a space
 * @s1: the pointer to string
 * @s2: the pointer to string
 *
 * Return: pointer to allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	unsigned int counter, size1, size2;

	size1 = 0;
	size2 = 0;
	counter = 0;
	if (s1 != NULL)
	{
	while (s1[counter])
	{
		size1++;
		counter++;
	}
	}
	else
		size1 = 0;
	counter = 0;
	if (s2 != NULL)
	{
	while (s2[counter])
	{
		size2++;
		counter++;
	}
	}
	else
		size2 = 0;
	counter = 0;
	array = malloc(sizeof(char) * (size1 + size2 + 1));
	if (array == NULL)
		return (NULL);
	if (s1 != NULL)
	{
	while (s1[counter])
	{
		array[counter] = s1[counter];
		counter++;
	}
	}
	counter = 0;
	if (s2 != NULL)
	{
	while (s2[counter])
	{
		array[size1 + counter] = s2[counter];
		counter++;
	}
	}
	array[size1 + size2] = '\0';
	return (array);
}
