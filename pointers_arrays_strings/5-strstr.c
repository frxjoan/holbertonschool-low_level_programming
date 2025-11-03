#include "main.h"
/**
 * _strstr - Short description, single line
 * @haystack: Description of parameter x
 * @needle: D
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *_strstr(char *haystack, char *needle)
{
	char *jm = haystack;
	char *pjm = needle;
	char *h = haystack;

	while (*jm != '\0')
	{
		if (*jm == *pjm)
		{
			haystack = jm;
			h = jm;
			while (*pjm != '\0')
			{
				if (*h != *pjm)
					break;
				h++;
				pjm++;
			}
		}
		if (*h == *pjm)
			return (haystack);
		pjm = needle;
		jm++;
	}
	return ('\0');
}
