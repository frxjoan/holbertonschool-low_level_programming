#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Short description, single line
 * @width: Description of parameter x
 * @height: D
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **tab;

	if (width <= 0 || height <= 0)
		return (NULL)
	tab = malloc(height * sizeof(int *));
	if (tab == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(width * sizeof(int));
		if (!tab[i])
		{
			for (j = 0; j < i; j++)
				free(tab[j]);
			free(tab);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}
	return (tab);
}
