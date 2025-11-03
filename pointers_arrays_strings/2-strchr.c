#include "main.h"
/**
 * _strchr - Short description, single line
 * @s: Description of parameter x
 * @c: D
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *_strchr(char *s, char c)
{
	char *cpys = s;

	while (*cpys != '\0')
	{
		if (*cpys == c)
			return (cpys);
		cpys++;
	}
	if (*cpys == '\0' && c == '\0')
		return (cpys);
	return (0);
}
