#include "main.h"
/**
 * rot13 - Short description, single line
 * @p: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *rot13(char *p)
{
	char *pc = p;
	
	while (*p != '\0')
	{
		while ((*p >= 'a' && *p <= 'z') && (*p >= 'A' && *p <= 'Z'))
		{
			if (*p <= 'm')
			{
				*p += 13;
				break;
			}
			*p -= 13;
		}
	}
	return (pc);
}
