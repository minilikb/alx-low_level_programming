#include "holberton.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = 9008;
	c = 10000;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
