#include "main.h"
/**
 * cap_string - Short description, single line
 * @p: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *cap_string(char *p)
{
	char *c = p;
	char lst[12] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}','\n'};
	int *i = lst;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			while (*i != '\n')
				if (*p == *i)
				{
					p = p + 1;
					*p -= 32;
				}
				i++;
			*i = lst;
		}
		p++;
	}
	return (c);
}
