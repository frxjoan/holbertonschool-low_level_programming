#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{
			if (i % 3 == 0 && i % 5 == 5)
			{
				printf("FizzBuzz ");
			}
			else if (i % 3)
			{
				printf("Fizz ");
			}
			else if (i % 5)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", i);
			}
		}
		else
		{
			printf("Buzz\n");
		}
	}
	return (0);
}
