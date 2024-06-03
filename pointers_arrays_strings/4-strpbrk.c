#include "main.h"

/**
 * *_strpbrk - searches string for set of bytes
 * @s: string
 * @accept: string
 * Return: byte pointer or NULL
**/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s != '\0')
{
		s++;
		while (accept[i] != '\0')
{
			i++;
			if (*s == accept[i])
			return (s);
}
}
	return (0);
}
