#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array and initialize with spec char
 * @size: size of array
 * @c: character
 * Return: NULL or to the array
**/
char *create_array(unsigned int size, char c)
{
	unsigned int  i;
	char *str_array = NULL;

	if (size == 0)
{
		return (NULL);
}
	str_array = malloc(sizeof(char) * size);

	if (str_array == NULL)
{
		return (NULL);
}
	for (i = 0; i < size; i++)
{
		str_array[i] = c;
}
	return (str_array);
}
