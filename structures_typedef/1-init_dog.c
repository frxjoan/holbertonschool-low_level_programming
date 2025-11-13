#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Short description, single line
 * @d: Description of parameter x
 * @name: D
 * @age: D
 * @owner: D
 * Return: Description of the returned value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
