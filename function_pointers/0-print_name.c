#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Short description, single line
 * @name: D
 * @f: D
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || *name == '\0')
		return;
	f(name);
}
