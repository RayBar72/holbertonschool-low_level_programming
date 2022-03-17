#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_grid - frees 2 dim grid
 * @grid: pointer to pointer of function alloc_grid
 * @height: height of function
 *
 * Return: null if fails, other pointer to the array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
