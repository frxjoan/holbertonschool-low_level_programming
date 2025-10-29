#include "main.h"
/**
 * reverse_array - Short description, single line
 * @a: Description of parameter x
 * @n: D
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
void reverse_array(int *a, int n)
{
	int *end = a + n - 1;
	int *start = a;
	int tmp;

	while (end > start)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		end--;
		start++;
	}
}
