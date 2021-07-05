#include "holberton.h"

/**
 * print_chessboard - prints a chessboard.
 * @a: pointer to chessboard
 *
 * Return: (void)
 */

void print_chessboard(char (*a)[8])
{
	unsigned int counter, i;

	for (counter = 0; counter < 8 ; counter++)
	{
		for (i = 0; a[counter][i] != '\0' && i < 8; i++)
		{
			_putchar(a[counter][i]);
		}
		_putchar('\n');
	}
}
