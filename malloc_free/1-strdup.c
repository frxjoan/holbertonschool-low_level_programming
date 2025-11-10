#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Short description, single line
 * @str: Description of parameter x
 * Return: fzifhzpi
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * _strdup - Short description, single line
 * @str: Description of parameter x
 * Return: fzifhzpi
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;

	ptr = malloc((_strlen(str) + 1) * sizeof(char));
	if (ptr == NULL || str == NULL)
		return (0);
	for (i = 0; i <= _strlen(str); i++)
		ptr[i] = str[i];
	return (ptr);
}
