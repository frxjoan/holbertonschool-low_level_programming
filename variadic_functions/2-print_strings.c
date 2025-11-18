#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - Short description, single line
 * @separator: Description of parameter x;:
 * @n: Description of parameter x
 * Return: Description of the returned value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(arg);
	unsigned int i;
	char *str;

	va_start(arg, n);
	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (i > 0 && *separator != '\0')
			printf("%s", separator);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
	}
	va_end(arg);
	printf("\n");
}
