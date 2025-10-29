#include "main.h"
/**
 * string_toupper - Short description, single line
 * @p: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *string_toupper(char *p)
{
	while (*p != '\0')
	{
		if (*p >= "a" && *p <= "z")
			*p -= 32;
		p++;
	}
}
