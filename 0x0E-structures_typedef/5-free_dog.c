#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - free the allocate it space for do
 * @d: pointer to dog  struct to free
 *
 * Return:void
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
