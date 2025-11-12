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

	if (str == NULL)
		return (0);
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
	int j, k, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	ptr = malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < len1; j++)
		ptr[j] = s1[j];
	for (k = 0; k < len2; k++, j++)
		ptr[j] = s2[k];
	ptr[j] = '\0';
	return (ptr);
}
