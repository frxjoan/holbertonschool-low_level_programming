#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);
/**
 * struct printev - Short description, single line
 * @type: Description of parameter x
 * @form: Description of parameter x
 * Return: Description of the returned value
 */
typedef struct printev
{
	char type;
	void (*form)(va_list arg);
} format_f;

#endif
