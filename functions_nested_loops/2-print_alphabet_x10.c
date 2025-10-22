#include "main.h"
/**
 * print_alphabet_x10 - print alphabet *10
 * @void: void
(* a blank line
 * Description: it's in the title
(* section header: main h)*
 * Return: abcd...
 */
void print_alphabet_x10(void)
{
int i;
int c;
for (i = 1; i <= 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
