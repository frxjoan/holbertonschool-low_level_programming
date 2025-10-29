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
	char lst[13] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t'};
	int i;

	if (*p >= 'a' && *p <= 'z')
		*p -= 32;
	while (*p != '\0')
	{
		for (i = 0; i <= 13; i++)
			if (*p == lst[i])
			{
				if (*(p + 1) >= 'a' && *(p + 1) <= 'z')
				{
					p = p + 1;
					*p -= 32;
				}
			}
		p++;
	}
	return (c);
}
