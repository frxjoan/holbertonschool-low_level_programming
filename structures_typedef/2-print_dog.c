#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Short description, single line
 * @d: Description of parameter x
 * Return: Description of the returned value
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
