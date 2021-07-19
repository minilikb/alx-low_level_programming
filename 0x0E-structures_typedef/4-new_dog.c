#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function that count the number of characters in a string
 * @s: char pointer
 * Return: int
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _copychar - function that copy a string to another
 * @dest: char pointer
 * @src: char pointer
 * Return: char
*/
char *_copychar(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

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
	char *cpyn, *cpyo;
	int lenn, leno;

	if (name == NULL || owner == NULL)
		return (NULL);

	lenn = _strlen(name);
	leno = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	cpyn = malloc(sizeof(char *) * (lenn + 1));
	if (cpyn == NULL)
	{
		free(d);
		free(cpyn);
		return (NULL);
	}
	cpyn = _copychar(cpyn, name);
	cpyo = malloc(sizeof(char *) * (leno + 1));
	if (cpyo == NULL)
	{
		free(d);
		free(cpyo);
		free(cpyn);
		return (NULL);
	}
	cpyo = _copychar(cpyo, owner);
	d->name = cpyn;
	d->age = age;
	d->owner = cpyo;
	return (d);
}
