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
	int end;

	while (str[len] != '\0')
		len++;
	end = len - 1;
	if (end % 2 != 0)
		end = (end + 1) / 2;
	else
		end = end / 2;
	for (i = end; i <= end * 2; i++)
		_putchar(str[i]);
	_putchar('\n');
}
