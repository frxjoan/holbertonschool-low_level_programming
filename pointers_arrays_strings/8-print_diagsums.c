#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Short description, single line
 * @a: Description of parameter x
 * @size: D
 */
void print_diagsums(int *a, int size)
{
	int i;
	int suma = 0;
    int sumb = 0;

    for (i = 0; i < size; i++)
    {
        suma += a[size * i + i];
        sumb += a[size - i];
    }
    printf("%d, %d\n", suma, sumb);
}
