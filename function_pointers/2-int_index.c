#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: an array
 * @size: size of array
 *@cmp: compare values
 *Return: -1 nothing matches or size is <= 0, if success ret 1st element of cmp
**/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0  && cmp != NULL)
{
		for (i = 0; i < size; i++)
{
			if (cmp(array[i]))
{
				return (i);
}
}
}
	return (-1);
}
