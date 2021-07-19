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
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
