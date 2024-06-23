#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Write a function that executes a funct through an array.
 * @array:
 * @size: size of array
 * @action:
 * Return: void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && size > 0  && action != NULL)
{
		for (i = 0; i < (int)size; i++)
{
			action(array[i]);
}
}
}
