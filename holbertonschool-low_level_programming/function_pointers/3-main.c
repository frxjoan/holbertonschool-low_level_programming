#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int (*op)(int, int), res;

	op = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = op(atoi(argv[1]), atoi(argv[3]))
	printf("%d",res);
	return (0);
}
