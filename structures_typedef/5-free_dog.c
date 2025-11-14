#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Short description, single line
 * @d: D
 * Return: Description of the returned value
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
}
