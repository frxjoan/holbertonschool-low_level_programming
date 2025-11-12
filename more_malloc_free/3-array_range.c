#include "main.h"
#include <stdlib.h>
/**
 * array_range - Short description, single line
 * @min: Description of parameter x
 * @max: D
 * Return: Description of the returned value
 */
int *array_range(int min, int max)
{
	int nb, i = 0;
	int *tab;

	if (min > max)
		return (NULL);
	tab = malloc((max - min + 1) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	for (nb = min; nb <= max; nb++, i++)
		tab[i] = nb;
	return (tab);
}
