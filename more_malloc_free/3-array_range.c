#include "main.h"
#include <stdlib.h>
/**
 * array_range - min and max
 * @min: minimum size of array
 * @max: maximum size of array
 * Return: min > max or fails, NULL; pointer to the new array
**/
int *array_range(int min, int max)
{
	int *int_aa = 0;
	int t_s = 0;
	int i;

	if (min > max)
{
		return (NULL);
}
	t_s = ((max - min) + 1);

	int_aa = malloc(sizeof(int) * t_s);

	if (int_aa == NULL)
{
		return (NULL);
}
	for (i = 0; i < t_s; i++)
{
		int_aa[i] = min + i;
}
	return (int_aa);
}
