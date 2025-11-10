#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Short description, single line
 * @str: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *_strdup(char *str)
{
	unsigned long int i;
	char *ptr;

	ptr = malloc(sizeof(str) * sizeof(char));
	if (ptr == NULL || str == NULL)
		return (0);
	for (i = 0; i <= sizeof(str) + 1; i++)
		ptr[i] = str[i];
	return (ptr);
}
