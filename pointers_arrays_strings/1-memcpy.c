#include "main.h"

/**
 * *_memcpy - copy a memory area
 * @dest: destination
 * @src: memory area
 * @n: bytes
 * Return: dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
{
		i++;
		dest[i] = *src;
}
	return (dest);
}
