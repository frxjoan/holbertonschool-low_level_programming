#include "main.h"
/**
 * print_sign - Short description, single line
 * @n: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
else if (n == 0)
{
_putchar('0');
}
else
{
putchar('-');
}
}
