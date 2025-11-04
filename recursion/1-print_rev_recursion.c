#include "main.h"
/**
 * _print_rev_recursion - Short description, single line
 * @s: Description of parameter x
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
