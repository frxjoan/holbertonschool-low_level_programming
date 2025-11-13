#include "dog.h"
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
