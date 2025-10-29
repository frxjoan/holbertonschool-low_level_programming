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

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	if (n >= i + 1)
	{
		for (i = i; i <= n && *dest != '\0'; i++)
		{
			*dest = '\0';
			dest++;
		}
	}
	return odest;
}
