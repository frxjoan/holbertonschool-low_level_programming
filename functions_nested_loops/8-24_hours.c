#include "main.h"
/**
 * jack_bauer - Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
void jack_bauer(void)
{
int i;
int j;
int a = i / 10;
int b = i % 10;
int c = j / 10;
int d = j % 10;
for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
}
}
}
