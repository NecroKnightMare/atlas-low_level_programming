#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocate 2d array
 * @width: w of grid
 * @height: h of grid
 * Return: NULL failure or w or h is 0 NULL, 0 if success
**/
int **alloc_grid(int width, int height)
{
	int c;
	int **grid;
	int r;

	if (width < 1 && height < 1)
{
                return (NULL);
}
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
{
		return (NULL);
}
	for (r = 0; r < height; r++)
{
	grid[r] = malloc(sizeof(int) * width);
}
	for (r = 0; r < height ; r++)

	for (c = 0; c < width; c++)
		grid[r][c] = 0;

	return (grid);
}
