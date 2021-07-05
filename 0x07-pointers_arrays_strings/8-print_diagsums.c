#include "holberton.h"

/**
 * print_diagsums - prints a sum of a square matrix.
 * @a: pointer to square matrix
 * @size: size of square matrix
 * Return: (void)
 */

void print_diagsums(int *a, int size)
{
	int counter, i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (counter = 0; counter <= (size * size) ; counter = counter + size + 1)
		sum1 += a[counter];
	for (i = 0; i <= (size * size) - size; i = i + size - 1)
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
