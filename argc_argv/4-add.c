#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - main
* @argc: a
* @argv: b
* Return:  A column of asterisks on the left side,
*/
int main(int argc, char **argv)
{
	int sum = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (ispunct(argv[i][j]) || isalpha(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
