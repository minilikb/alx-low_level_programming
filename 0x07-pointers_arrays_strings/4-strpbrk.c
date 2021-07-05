#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to checked string
 * @accept: byte to check
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int counter, i;

	for (counter = 0; s[counter] != '\0' ; counter++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[counter] == accept[i])
				return (s + counter);
		}
	}
	return (NULL);
}
