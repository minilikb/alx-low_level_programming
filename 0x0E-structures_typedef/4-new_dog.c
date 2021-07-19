#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - create a dog type
 * @name: char *
 * @age: float
 * @owner: char *
 *
 * Return: Always dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return NULL;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return NULL;
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
