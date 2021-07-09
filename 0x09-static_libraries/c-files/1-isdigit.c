#include "holberton.h"

/**
 * _isdigit - check if character is digit [0-9]
 * @c : integer value
 * Return: 1 if c is digit [0-9] 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
