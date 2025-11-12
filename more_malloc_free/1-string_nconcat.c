#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Short description, single line
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
 * string_nconcat - Short description, single line
 * @s1: Description of parameter x
 * @s2: Description of parameter x
 * @n: Description of parameter x
 * Return: f
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, n2;
	char *ptr, *ptr2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n2 = len2;
	else
		n2 = n;
	ptr = malloc((len1 + n2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr2 = ptr;
	while(*s1 != '\0')
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	for (i = 0; i < n2 && *s2 != '\0'; i++)
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	return (ptr2);
}
