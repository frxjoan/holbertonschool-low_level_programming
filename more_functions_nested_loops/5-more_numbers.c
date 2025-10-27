#include "main.h"
/**
 * more_numbers - Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j / 10 + '0');
			if (j > 9)
			{
				_putchar(j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
