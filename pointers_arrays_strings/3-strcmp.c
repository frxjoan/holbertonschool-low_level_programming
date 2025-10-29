#include "main.h"
/**
 * _strcmp - Short description, single line
 * @s1: Description of parameter x
 * @s2: D
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (s1 != '\0' && s2 != '\0'))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}