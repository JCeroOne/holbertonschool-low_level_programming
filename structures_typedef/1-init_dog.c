#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a "dog" object.
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
