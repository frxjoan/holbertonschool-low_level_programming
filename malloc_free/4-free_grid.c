#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Short d fserzqsdezf zef  zr ee
 * @grid: dedecept dd dferzdgre f
 * @height: D
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
