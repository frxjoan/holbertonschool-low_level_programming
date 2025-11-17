#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Short description, single line
 * @name: D
 * @f: D
 * Return: Description of the returned value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
