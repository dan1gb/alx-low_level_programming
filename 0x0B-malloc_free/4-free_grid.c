#include <stdlib.h>
#include "main.h"

/**
* free_grid - function to free memory
* @grid: lol, dunno
* @height: height of 2d array
* Return: grid
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
