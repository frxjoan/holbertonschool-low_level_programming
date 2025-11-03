#include "main.h"
/**
 * _strspn - Short description, single line
 * @s: Description of parameter x
 * @accept: D
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = accept;
	char *ptr = s;
	int compteur = 0;

	while (*ptr != '\0')
	{
		while (*p != '\0')
		{
			if (*ptr == *p)
			{
				compteur += 1;
				break;
			}
			p++;
		}
		if (*ptr != *p)
			return (compteur);
		*p = accept;
		ptr++;
	}
	return (compteur);
}
