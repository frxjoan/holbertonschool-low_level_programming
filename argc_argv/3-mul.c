#include <stdio.h>
#include <stdlib.h>
/**
* main - main
* @argc: a
* @argv: b
* Return:  A column of asterisks on the left side,
*/
int main(int argc, char **argv)
{
	int i;
	int sum = 1;

	for (i = 1; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
