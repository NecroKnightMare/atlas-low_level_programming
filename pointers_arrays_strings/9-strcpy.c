#include "main.h"

/**
 * 
 * @:
 * Return:
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
{
		i++;
}
	for (; j < i; i++)
{
		dest[j] = src[j];
}
	dest[i] = '\0';
	return(dest);
}
