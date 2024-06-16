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
	int s;
	char *call_s;

	if (size == 0 && nmemb == 0)
{
		return(NULL);
}
	call_s = calloc(sizeof(nmemb), sizeof(size));

	for (i = 0; i < s; i++)
{
		s++;
		call_s[i] = 0;
}
	if (call_s == NULL)
{
		return(NULL);
}
	return(call_s);
}
