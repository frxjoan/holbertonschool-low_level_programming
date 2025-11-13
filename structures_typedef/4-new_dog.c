#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - Short description, single line
 * @name: D
 * @age: D
 * @owner: D
 * Return: Description of the returned value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo;

	dogo = malloc(sizeof(dog_t));
	if (dogo == NULL)
		return (NULL);
	dogo->name = strdup(name);
	dogo->age = age;
	dogo->owner = strdup(owner);
	return (dogo);
}
