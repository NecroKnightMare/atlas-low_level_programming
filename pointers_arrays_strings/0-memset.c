#include "main.h"

/**
 * *_memset - fill memory with constant byte
 * @s: pointer
 * @b: byte
 * @n: memory
 * Return: a pointer
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n)
{
		n--;
		s[n - i] = b;
}
	return (s);
}
