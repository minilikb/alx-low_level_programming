#include "function_pointers.h"

/**
 * array_iterator - calls callback on each element of array
 * @array: pointer to array
 * @size: size of array
 * @action: function callback
 *
 * Return: (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int counter = 0;

	if (action == NULL || size <= 0 || array == NULL)
		return;
	while (counter < size)
	{
		action(array[counter]);
		counter++;
	}
}
