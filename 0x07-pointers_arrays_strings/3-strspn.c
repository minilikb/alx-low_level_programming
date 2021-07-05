#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to checked string
 * @accept: byte to check
 *
 * Return: the number of bytes which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter, i, success, checker;

	success = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		checker = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[counter] == accept[i])
			{
				success++;
				checker = 1;
			}
		}
		if (checker == 0)
			return (success);
	}
	return (success);
}
