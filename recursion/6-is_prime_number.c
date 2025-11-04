#include "main.h"
/**
 * _sqrt_check - Checks if a number is prime.
 * @n: The number to check.
 * @i: The number to check.
 * Return: 1 if prime, 0 otherwise.
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
 * prime_num - Short description, single line
 * @n: Description of parameter x
 * @x: Description of parameter x
 * Return: d
 */
int prime_num(int n, int x)
{
	if (x > _sqrt_check(n, 1))
		return (1);
	if (n % x == 0)
		return (0);
	return (prime_num(n, x + 1));
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_num(n, 2));
}
