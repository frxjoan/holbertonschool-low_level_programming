#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Short description, single line
 * @separator: Description of parameter x;:
 * @n: Description of parameter x
 * Return: Description of the returned value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (i != n - 1 && separator != NULL)
			printf("%d%s", va_arg(arg, int), separator);
		else
			printf("%d", va_arg(arg, int));
	}
	printf("\n");
	va_end(arg);
}
