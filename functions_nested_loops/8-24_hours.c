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
int dh;
int uh;
int dm;
int um;
for (dh = 0; dh <= 2; dh++)
{
for (uh = 0; uh <= 3; uh++)
{
for (dm = 0; dm <= 5; dm++)
{
for (um = 0; um <= 9; um++)
{
_putchar(dh + '0');
_putchar(uh + '0');
_putchar(':');
_putchar(dm + '0');
_putchar(um + '0');
_putchar('\n');
}
}
}
}
}
