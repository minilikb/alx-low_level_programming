#include "holberton.h"

/**
 * _strstr - searches for substring.
 * @haystack: pointer to checked string
 * @needle: substring
 *
 * Return: a pointer to the first byte of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int counter, i, checker;

	for (counter = 0; haystack[counter] >= '\0' ; counter++)
	{
		checker = 0;
		for (i = 0; needle[i] >= '\0'; i++)
		{
			if (haystack[counter + i] == needle[i])
				checker = 1;
			else
				checker = 0;
		}
		if (checker)
			return (haystack + counter);
	}
	return (NULL);
}
