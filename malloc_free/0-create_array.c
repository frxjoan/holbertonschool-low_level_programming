#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Short description, single line
 * @size: Description of parameter x
 * @c: D
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	tab = malloc(size * sizeof(char));
	if (size == 0)
		return (0);
	if (tab == NULL)
		return (0);
	for (i = 0; i <= size; i++)
		tab[i] = c;
	return (tab);
}
