#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - init a dog type
 * @d: struct dog pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
