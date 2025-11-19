#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - Short description, single line
 * @arg: Description of parameter x;:
 * @bool: Description of parameter x;:
 * Return: Description of the returned value
 */
void print_char(va_list arg, int *bool)
{
	char l = va_arg(arg, int);

	if (*bool == 0)
		printf(", ");
	printf("%c", l);
	*bool = 0;
}
/**
 * print_int - Short description, single line
 * @arg: Description of parameter x;:
 * @bool: Description of parameter x;:
 * Return: Description of the returned value
 */
void print_int(va_list arg, int *bool)
{
	int x = va_arg(arg, int);

	if (*bool == 0)
		printf(", ");
	printf("%d", x);
	*bool = 0;
}
/**
 * print_float - Short description, single line
 * @arg: Description of parameter x;:
 * @bool: Description of parameter x;:
 * Return: Description of the returned value
 */
void print_float(va_list arg, int *bool)
{
	double n = va_arg(arg, double);

	if (*bool == 0)
		printf(", ");
	printf("%f", n);
	*bool = 0;
}
/**
 * print_str - Short description, single line
 * @arg: Description of parameter x;:
 * @bool: Description of parameter x;:
 * Return: Description of the returned value
 */
void print_str(va_list arg, int *bool)
{
	char *s = va_arg(arg, char *);
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
	int i = 0, j = 0;
	int bouboule = 1;
	int *bool = &bouboule;
	format_f tab[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};
	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (tab[j].type != '\0')
		{
			if (format[i] == tab[j].type)
			{
				tab[j].form(arg, bool);
			}
			j++;
		}
		i++;
	}
	va_end(arg);
	printf("\n");
}
