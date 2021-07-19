#ifndef _DOG_
#define _DOG_

/**
 * struct dog - a struct type of dog
 * @name: name of dog
 * @owner: name of owner
 * @age: age of dog
 *
 * Return: none
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
