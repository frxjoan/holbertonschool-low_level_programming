#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Short description, single line
 * @b: Description of parameter x
 * Description: Longer description of the function)?
 * Return: Description of the returned value
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
