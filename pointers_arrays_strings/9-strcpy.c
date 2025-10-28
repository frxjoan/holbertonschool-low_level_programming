#include "main.h"
/**
 * _strcpy - Short description, single line
 * @dest: Description of parameter x
 * @src: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *dest0 = dest;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		dest ++;
		src ++;
	}
	*dest = '\0';

	return (dest0);
}
