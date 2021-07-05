#include "holberton.h"

/**
 * _strstr - searches for substring.
 * @haystacj: pointer to checked string
 * @needle: substring
 *
 * Return: a pointer to the first byte of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int counter, i, checker;

	for (counter = 0; s[counter] != '\0' ; counter++)
	{
		checker = 0;
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (s[counter + i] == needle[i])
				checker = 1;
			else
				checker = 0;
		}
		if (checker)
			return (s + counter);
	}
	return (NULL);
}
