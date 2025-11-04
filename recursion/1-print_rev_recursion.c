#include "main.h"
/**
 * _print_rev_recursion - Short description, single line
 * @s: Description of parameter x
 */
void _print_rev_recursion(char *s)
{
	int i;
	char *p = s;

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	for (i = *s; i >= *p; i--)
	{
		_putchar(*s);
	}
}
