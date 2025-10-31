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
	int i;
	char alphabet1[] = "abcdefghijklmABCDEFGHIJKLM";
	char alphabet2[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";
	
	while (*p != '\0')
	{
		for (i = 0; i <= 25; i++)
		{
			if (*s == alphabet1[i] || *s == alphabet2[i])
			{
				*s = alphabet2[i] || *s = alphabet1[i];
			}
		}
	}
	return (pc);
}
