#include "holberton.h"

/**
 * _isupper - check if character is upper case
 * @c : integer value
 * Return: 1 if c is upper case 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
