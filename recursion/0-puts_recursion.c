#include "main.h"
/**
 * _puts_recursion - Short description, single line
 * @s: Description of parameter x
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
