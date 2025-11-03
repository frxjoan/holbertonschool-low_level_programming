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

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		jm = haystack;
		pjm = needle;
		while (*jm == *pjm && *pjm != '\0' && *jm != '\0')
		{
			jm++;
			pjm++;
		}
		if (*pjm == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
