#include "main.h"
/**
 * _sqrt_recursion - Short description, single line
 * @n: Description of parameter x
 * Return: un int
 */
int _sqrt_check(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_check(n, i + 1));
}
/**
 * _sqrt_recursion - s
 * @n: s
 * Return: s
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_check(n, 1));
}
