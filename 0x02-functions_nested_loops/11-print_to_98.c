#include <stdio.h>

/**
 * print_to_98 - prints sequence from n to 98
 * @n: integer value / the start
 *
 * Return: (void)
 *
 */

void print_to_98(int n)
{
	while ((n < 98) || (n > 98))
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("%d\n", 98);
}
