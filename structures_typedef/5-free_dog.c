#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated to a dog object.
 * @d: The dog object.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
