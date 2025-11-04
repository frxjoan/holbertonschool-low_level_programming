#include <stdio.h>
/**
* main - main
* @argc: a
* @argv: b
* Return:  A column of asterisks on the left side,
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
