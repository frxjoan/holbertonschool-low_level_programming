#include "main.h"
/**
 * _memcpy - Short description, single line
 * @dest: Description of parameter x
 * @src: D
 * @n: D
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i = 0;

	while (i < n)
	{
		p[i] = src[i];
		i++;
	}
	return (dest);
}
