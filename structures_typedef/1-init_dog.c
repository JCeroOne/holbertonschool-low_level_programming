#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a dog variable.
 * @d: The dog to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	*d.name = name;
	*d.age = age;
	*d.owner = owner;
}
