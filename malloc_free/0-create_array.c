#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array and initialize with spec char
 * @size: size of array
 * @c: charcter
 * Return: NULL or to the array
**/
char *create_array(unsigned int size, char c)
{
	unsigned int  i = 0;
	char *str_array = NULL;
	
	str_array = malloc(size);

	if (str_array == NULL)
{
		return (NULL);
}
	if (size == 0)
{
		return (NULL);
}
	while (i < size)
{
		i++;
		str_array[i] = c;
}
	return (str_array);
}
