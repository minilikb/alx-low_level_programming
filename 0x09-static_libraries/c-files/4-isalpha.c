#include "holberton.h"

/**
 * _isalpha - check if character is alphabetic
 * @c : integer value
 * Return: 1 if c is alphabetic 0 otherwise
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
