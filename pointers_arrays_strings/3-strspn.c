#include "main.h"
/**
 * _strspn - Short description, single line
 * @s: Description of parameter x
 * @accept: D
(* a blank line
 * Description: calcule la longueur du segment initial de s qui ne contient que des caracteres dans accept.
(* section header: Section description)*
 * Return: Description of the returned value
 */
unsigned int _strspn(char *s, char *accept)
{
	compteur = 0;
	char *p = accept;

	while (*s != '\0')
	{
		while (*p != '\0')
		{
			if (*p == *s)
				compteur += 1;
			else
				

		}
	}
	return (compteur);
}
