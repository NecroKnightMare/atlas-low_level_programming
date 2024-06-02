#include "main.h"

/**
 * _strcat - appends concatonate string to dest
 * @dest: string 1
 * @src: string 2
 * Return: dest
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

	return (result);
}
