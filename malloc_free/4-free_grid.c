#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free grid in file 3
 * @grid: grid pointer
 * @height: h of grid
 * Return: NULL
**/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
{
		free(grid[i]);
}
}
