#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  function to free a dog.
 * @d: pointer to struct dog.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
