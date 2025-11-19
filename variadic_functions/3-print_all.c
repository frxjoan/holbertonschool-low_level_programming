#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - Short description, single line
 * @arg: Description of parameter x;:
 * Return: Description of the returned value
 */
void print_char(va_list arg)
{
	char l = va_arg(arg, int);

	printf("%c", l);

}
/**
 * print_int - Short description, single line
 * @arg: Description of parameter x;:
 * Return: Description of the returned value
 */
void print_int(va_list arg)
{
	int x = va_arg(arg, int);

	printf("%d", x);
}
/**
 * print_float - Short description, single line
 * @arg: Description of parameter x;:
 * Return: Description of the returned value
 */
void print_float(va_list arg)
{
	double n = va_arg(arg, double);

	printf("%f", n);
}
/**
 * print_str - Short description, single line
 * @arg: Description of parameter x;:
 * Return: Description of the returned value
 */
void print_str(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
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
	int boule = 1;
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
				if (!boule)
					printf(", ");
				tab[j].form(arg);
				boule = 0;
			}
			j++;
		}
		i++;
	}
	va_end(arg);
	printf("\n");
}
