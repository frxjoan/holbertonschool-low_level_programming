#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Short description, single line
 * @nmemb: Description of parameter x
 * @size: D
 * Description: Longer description of the function)?
 * Return: Description of the returned value
 */
void _calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i, total = size * nmemb;

	if (size == 0 || nmemb == 0)
		return (NULL);
	if (total / nmemb != size)
		return (NULL);
	p = malloc(size * nmemb);
		if (p == NULL)
			return (NULL);
	for (i = 0; i < total; i++)
		p[i] = 0;
	return (p);
}
