#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked - allocate memory
 * @b: pointer
 * Return: 98 if fail
**/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
{
		exit(98);
}
	return (ptr);
}
