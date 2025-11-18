#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_char(char l, int *bool)
{
	if (*bool == 0)
		printf(", ");
	printf("%c", l);
	*bool = 0;
}

void print_int(int x, int *bool)
{
	if (*bool == 0)
		printf(", ");
	printf("%d", x);
	*bool = 0;
}

void print_float(double n, int *bool)
{
	if (*bool == 0)
		printf(", ");
	printf("%f", n);
	*bool = 0;
}

void print_str(char *s, int *bool)
{
	char *tmp = s;
	if (*bool == 0)
		printf(", ");
	if (tmp == NULL)
		tmp = "(nil)";
	printf("%s", tmp);
	*bool = 0;
}
/**
 * print_all - Short description, single line
 * @format: Description of parameter x;:
 * Return: Description of the returned value
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	int bool = 1;

	va_start(arg, format);

	va_end(arg);
}
