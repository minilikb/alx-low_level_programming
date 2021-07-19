#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free a dog type
 * @d: struct dog pointer
 *
 * Return: Always none
 */
void free_dog(struct dog *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
