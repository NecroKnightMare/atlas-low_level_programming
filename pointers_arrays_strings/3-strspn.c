#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string length
 * @accept: bytes
 * Return: number of bytes
**/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while(s[i] != '\0')
{
		i++;
		while (accept[j] != '\0')
{
			j++;
			if (s[i] == accept[j])
{
				break;
}
}
	if (!(accept[j] == '\0'))
{
		break;
}
}
	return (i);
}
