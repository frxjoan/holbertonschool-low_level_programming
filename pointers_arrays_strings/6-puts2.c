#include "main.h"
/**
* puts2 - Short description, single line
* @str: Description of parameter x
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] % 2 != 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
