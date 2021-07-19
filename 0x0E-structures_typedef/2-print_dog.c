#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - init a dog type
 * @d: struct dog pointer
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
