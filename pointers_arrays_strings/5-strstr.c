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
	char jm = haystack;
	char pjm = needle;

	while (jm != '\0')
	{
		if (jm == pjm)
		{
			haystack = jm;
			while (pjm != '\0')
			{
				if (jm != pjm)
					break;
				jm++;
				pjm++;
			}
		}
		if (jm == *pjm)
			return (haystack);
		pjm = needle;
		jm++;
	}
	return (0);
}
