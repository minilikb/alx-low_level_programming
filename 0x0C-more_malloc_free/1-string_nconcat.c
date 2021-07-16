#include "holberton.h"

/**
 * string_nconcat - concatenates selected bytes of string
 * @s1: dest str
 * @s2: src str
 * @n: selected bytes
 *
 * Return: pointer to allocated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *address;
	unsigned int i = 0, j = 0, c = 0, c2 = 0;

	for (; s1[i]; i++)
	{}
	for (; s2[j]; j++)
	{}
	if (n < j)
	{
		j = n;
	}
	else
	{
		j = 0;
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = NULL;

	address = malloc(sizeof(char *) * (j + i + 1));
	if (address == NULL)
		return (NULL);

	for (; c < i || c2 < j ; c++)
	{
		if (c < i)
		{
			address[c] = s1[c];
		}
		if (c >= i && c2 < j)
		{
			address[c] = s2[c2];
			c2++;
		}
	}
	address[c] = '\0';
	return (address);
}
