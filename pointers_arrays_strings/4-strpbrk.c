#include "main.h"
/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = accept;
	char *ptr = s;

	while (*ptr != '\0')
	{
			while (*p != '\0')
			{
					if (*ptr == *p)
					{
							return (ptr);
					}
					p++;
			}
			p = accept;
			ptr++;
	}
	return (0);
}