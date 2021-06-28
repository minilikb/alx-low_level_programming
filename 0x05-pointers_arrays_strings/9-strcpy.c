#include "holberton.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: char pointer
 * @src: char pointer
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (src[j] != 0)
	{
		count++;
		j++;
	}
	for (i = 0; i < count; i++)
	{
		if (src[i] != 0)
			dest[i] = src[i];
	}
	dest[i + 1] = 0;
	return (dest);
}
