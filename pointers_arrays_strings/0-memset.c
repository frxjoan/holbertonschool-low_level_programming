#include "main.h"
/**
 * _memset - Short description, single line
 * @s: Description of parameter x
 * @b: D
 * @n: D
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		*s = b;
		i++;
	}
	return (s);
}
