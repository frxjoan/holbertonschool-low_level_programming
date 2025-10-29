#include "main.h"
/**
 * _strncpy - Short description, single line
 * @dest: Description of parameter x
 * @src: D
 * @n: D
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *odest = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
		{
			*dest = '\0';
			dest++;
		}
	}
	return (odest);
}
