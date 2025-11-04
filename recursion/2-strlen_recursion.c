#include "main.h"
/**
 * _strlen_recursion - Short description, single line
 * @s: Description of parameter x
 * Return: Description of the returned value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
