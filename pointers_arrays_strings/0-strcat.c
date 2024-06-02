#include "main.h"

/**
 * _strcat - appends concatonate string to dest
 * @: no paramenters
 * Returns: dest
**/

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
{
		dest++;
}
	while (*src != '\0')
{
		*dest = *src;
		dest++;
		src++;
}
	*dest = '\0';

	return result;
}
