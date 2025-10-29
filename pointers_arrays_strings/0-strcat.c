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
	char *tmp;
	int len = 0;
	while (len[src] != '\0')
	{
		tmp += src[len];
		len++;
	}
	len = 0;
	while (len[dest] != '\0')
	{
		tmp += dest[len];
		len ++;
	}
	src = dest;
	dest = tmp;
	return (dest);
}
