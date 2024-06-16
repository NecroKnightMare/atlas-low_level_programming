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
	int r = 98;
	void *ptr;

	ptr = malloc(sizeof(b);

	if (ptr == NULL)
		return(r);
	
	return(ptr);
}
