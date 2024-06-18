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
	int i = 0;
	int b = 0;
	char *call_s;

	b = nmemb * size;

	if (size == 0 && nmemb == 0)
{
		return(NULL);
}
	call_s = malloc(b);

	while (i < b)
{
		call_s[i] = 0;
		i++;
}
	if (call_s == NULL)
{
		return(NULL);
}
	return(call_s);
}
