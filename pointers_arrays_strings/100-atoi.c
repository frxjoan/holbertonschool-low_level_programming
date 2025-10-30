#include "main.h"
/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
int _atoi(char *s)
{
	int res = 0;
	int n = 1;

	while (*s != '\0')
	{
		if (res == 0)
		{
			if (*s >= '0' && *s <= '9')
			{
				res *= 10;
				res += *s - 48;
			}
			else if (*s == '-')
				n = n * -1;
			s++;
		}
		else
		{
			if (*(s + 1) >= '0' && *(s + 1) <= '9')
			{
				if (*s >= '0' && *s <= '9')
				{
					res *= 10;
					res += *s - 48;
					s++;
				}
			}
		}
		
	}
	return (res * n);
}