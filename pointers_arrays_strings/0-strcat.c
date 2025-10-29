#include "main.h"
/**
 * _strcat - Short description, single line
 * @dest: Description of parameter x
 * @src: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *_strcat(char *dest, char *src)
{
	str tmp = "";
	int len = 0;

	while (src[len] != '\0')
	{
		tmp += src[len];
		len++;
	}
	len = 0;
	while (dest[len] != '\0')
	{
		tmp += dest[len];
		len++;
	}
	dest = tmp;
	return (dest);
}