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
	int i;
	int **grid;
	int r;

	if (width == 0 && height == 0)
{
                return (NULL);
}
	for (r = 0; r < height; r++)
{
/**		return (height);**/
}
	for (i = 0; i < r; i++)
{
/**		return (width);**/
}
	grid = malloc(sizeof(width) + (sizeof(int *)) + 1);
	return (grid);
}
