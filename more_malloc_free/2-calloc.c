#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for array
 * @nmemb: array
 * @size: size of array
 * Return: if 0 or fails, NULL
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int j = nmemb * size;
	char *call_s;

	if (size == 0 && nmemb == 0)
{
		return(NULL);
}
	call_s = calloc(j);

	for (i = 0; i < j; i++)
{
}
	if (call_s == NULL)
{
		return(NULL);
}
	return(call_s);
}
