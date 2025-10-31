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
	
	while (*pc != '\0')
	{
		while ((*pc >= 'a' && *pc <= 'z') && (*pc >= 'A' && *pc <= 'Z'))
		{
			if (*pc <= 'm')
			{
				*pc += 13;
				break;
			}
			*pc -= 13;
		}
	}
	return (p);
}
