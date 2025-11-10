#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Short description, single line
 * @str: Description of parameter x
 * Return: Description of the returned value
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * str_concat - Short description, single line
 * @s1: Description of parameter x
 * @s2: D
 * Return: Description of the returned value
 */
char *str_concat(char *s1, char *s2)
{
	int j;
	int k;
	char *ptr;

	ptr = malloc((sizeof(s1) + sizeof(s2)) * sizeof(char));
	if (ptr == NULL)
		return (0);
	else if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	for (j = 0; j < _strlen(s1); j++)
		ptr[j] = s1[j];
	for (k = 0; k < _strlen(s2); k++)
	{
		ptr[j] = s2[k];
		j++;
	}
	return (ptr);
}
