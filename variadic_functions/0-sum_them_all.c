#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Short description, single line
 * @n: Description of parameter x
 * Return: Description of the returned value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);

	return (sum);
}
