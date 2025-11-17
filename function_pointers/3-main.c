#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- Short description, single line
 * @argc: D
 * @argv: D
 * Return: Description of the returned value
 */
int main(int argc, char **argv)
{
	int (*op)(int, int), res, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (op == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = op(num1, num2);
	printf("%d\n", res);
	return (0);
}
