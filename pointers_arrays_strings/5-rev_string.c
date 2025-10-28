#include "main.h"
/**
 * rev_string - Short description, single line
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
void rev_string(char *s)
{
	int len = 0;
	int j = 0;
	char tmp;
	int end;

	while (s[len] != '\0')
	{
		len++;
	}
	end = len - 1;

	while (j < end)
	{
		tmp = s[j];
		s[j] = s[end];
		s[end] = tmp;
		j++;
		end--;
	}
}
