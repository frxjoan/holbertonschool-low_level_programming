#include "main.h"
/**
 * print_last_digit - Short description, single line
 * @n: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
int print_last_digit(int n)
{
int v = (n % 10);
if (n > 0)
{
_putchar(v + '0');
return (n % 10);
}
else
{
v = -v;
_putchar(v + '0');
return (v);
}
}
