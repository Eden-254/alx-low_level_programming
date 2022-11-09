#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid  - frees up a grid
 * @grid: grid to check
 * @height: height of grid
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
