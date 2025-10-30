#include "main.h"
/**
 * leet - Short description, single line
 * @p: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
char *leet(char *p)
{
	char tab1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int tab2[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1}
	int i = 0;
	int j = 0;
	char *pc = p

	while (*p != '\0')
	{
		while (i != 9 && j != 9)
		{
			if (*p == tab1[i])
				*p = tab2[j]
			i++;
			j++;
		}
	}
	return (pc);
}