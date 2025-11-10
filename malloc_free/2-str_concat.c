#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Short description, single line
 * @s1: Description of parameter x
 * @s2: D
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *str_concat(char *s1, char *s2)
{
	unsigned long int i;
	unsigned long int j;
	char *ptr;

	ptr = malloc((sizeof(s1) + sizeof(s2)) * sizeof(char));
	if (s1 == NULL || s2 == NULL)
		return (0);
	for (i = 0; i < strlen(s1); i++)
		ptr[i] = s1[i];
	for (j = 0; j < strlen(s2); j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
