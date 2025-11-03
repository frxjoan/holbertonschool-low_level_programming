#include "main.h"
/**
 * factorial - Short description, single line
 * @n: Description of parameter x
 */
int _sqrt_recursion(int n)
{
	int i = n;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (i * i != n)
		i = i / n + 1;
	return (i * i == _sqrt_recursion(n));
}
