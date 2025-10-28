#include "main.h"
/**
 * puts_half - Short description, single line
 * @str: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (len != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
		len = (len + 1) / 2
	else
		len = len / 2
	for (i = len; i <= len * 2; i++)
		_putchar(str[i]);
	_putchar('\n');
}
