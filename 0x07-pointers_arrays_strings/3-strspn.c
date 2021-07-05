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
	int counter = 0;
	int i = 0;
	int success = 0;
	int checker;

	while (s[counter] >= '\0')
	{
		checker = 0;
		while (accept[i] >= '\0')
		{
			if (s[counter] == accept[i])
			{
				success++;
				checker = 1;
			}
			i++;
		}
		if (checker == 0)
			return (success);
		counter++;
	}
	return (success);
}
