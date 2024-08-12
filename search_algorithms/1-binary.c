#include "search_algos.h"
/**
 *binary_search - algorithm 
 *@array: array
 *@size: size of array
 *@value: value of output
 *Return: -1
**/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t midd;
	size_t i;

	if (array == NULL)
{
		return (-1);
}
	while (left <= right)
{
		printf("Searching in array: ");
	for (i = left; i <= right; i++)
{
		printf("%d", array[i]);
		if (i < right)
{
			printf(", ");
}
}
}
	printf("\n");

	midd = (left + right) / 2;

	if (array[midd] == value)
{
	return (midd);
}
	else if (array[midd] < value)
{
	left = midd + 1;
}
	else
{
	right = midd -1;
}
	return (-1);
}
