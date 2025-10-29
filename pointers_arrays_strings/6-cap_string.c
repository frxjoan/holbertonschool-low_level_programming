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
	char lst[' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'];
	int i;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			for (i = 0; i <= 10; i++)
				if (*p == lst[i])
				{
					p + 1 -= 32;
				}
		}
		p++;
	}
}
