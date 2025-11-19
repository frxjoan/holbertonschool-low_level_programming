#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct printev - Short description, single line
 * @type: Description of parameter x
 * @form: Description of parameter x
 * Return: Description of the returned value
 */
typedef struct printev
{
	char type;
	void (*form)(va_list arg, int *bool);
} format_f;

#endif
