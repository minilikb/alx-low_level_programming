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

/**
 * typedef dot_t - new nick name
 *
 * Return: none
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
