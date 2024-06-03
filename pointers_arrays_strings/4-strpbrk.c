#include "main.h"

/**
 * *_strpbrk - searches string for set of bytes
 * @s: string
 * @accept: string
 * Return: byte pointer or NULL
**/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
{
		accept ++;
		s++;
		if (*s != *accept)
{
			return ('\0');
}
}
	return (s);
}
