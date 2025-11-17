#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - apelle une fonction pour afficher un nom
 * @name: nom a afficher
 * @f: pointer sur fonction name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
