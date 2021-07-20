#include "function_pointers.h"

/**
 * int_index - calls compare callback on
 * each element of array to search for element
 * @array: pointer to array
 * @size: size of array
 * @cmp: function callback
 *
 * Return: index or (-1) if none
 */

int int_index(int *array, size_t size, int (*cmp)(int))
{
	unsigned long int counter = 0;
	int check = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (counter < size)
	{
		check = cmp(array[counter]);
		if (check != 0)
			return (counter);
		counter++;
	}
	return (-1);
}
