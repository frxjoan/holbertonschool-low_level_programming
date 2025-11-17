#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Short description, single line
 * @a: a
 * @b: b
 * Return: Description of the returned value
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Short description, single line
 * @a: a
 * @b: b
 * Return: Description of the returned value
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Short description, single line
 * @a: a
 * @b: b
 * Return: Description of the returned value
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Short description, single line
 * @a: a
 * @b: b
 * Return: Description of the returned value
 */
int op_div(int a, int b)
{
	if (a <= 0 || b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Short description, single line
 * @a: a
 * @b: b
 * Return: Description of the returned value
 */
int op_mod(int a, int b)
{
	if (a <= 0 || b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
