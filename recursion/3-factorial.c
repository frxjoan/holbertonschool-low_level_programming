#include "main.h"
/**
 * factorial - Short description, single line
 * @n: Description of parameter x
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}