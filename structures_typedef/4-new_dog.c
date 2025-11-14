#include "dog.h"
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
	int i, len;
	char *ptr;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	return (ptr);
}
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
	dogo->name = _strdup(name);
	dogo->age = age;
	dogo->owner = _strdup(owner);
	if (dogo->name == NULL)
		return (NULL);
	else if (dogo->owner == NULL)
		return (NULL);
	return (dogo);
}
