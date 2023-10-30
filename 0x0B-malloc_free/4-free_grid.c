#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimentional grid previously
 * created by your alloc_grid function
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: height of the grid
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

