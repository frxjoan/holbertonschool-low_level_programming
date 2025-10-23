#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Short description, single line
 * @n: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
void print_to_98(int n)
{
    if (n < 98)
    {
        printf('%d, ', n);
        n = n + 1;
        print_to_98(n);
    }

    else if (n > 98)
    {
        printf('%d, ', n);
        n = n - 1;
        print_to_98(n);
    }
    else
    {
        printf('%d', n);
    }
}