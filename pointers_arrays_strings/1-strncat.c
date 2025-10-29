#include "main.h"
/**
 * _strncat - Short description, single line
 * @dest: Description of parameter x
 * @src: Description of parameter x
 * @n: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *_strncat(char *dest, char *src, int n)
{
	char *odest = dest;

	while (*dest != '\0')
		dest++;
	for (src < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (odest);
}
