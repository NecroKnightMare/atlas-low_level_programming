#include "main.h"

/**
 * *_strncat - concatonate two strings
 * @dest: string 1
 * @src: string 2
 * @n: value
 * Return: dest
**/
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
{
		dest++;
}
	while (*src != '\0' && n > 0)
{
		*dest = *src;
		dest++;
		src++;
		n--;
}
	*dest = '\0';

	return (result);
}
