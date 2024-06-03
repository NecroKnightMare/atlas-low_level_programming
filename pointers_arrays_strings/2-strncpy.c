#include "main.h"

/**
 * *_strncpy - copy strings with n variable
 * @dest: first string
 * @src: second string
 * @n: value of second string
 * Return: dest
**/
char *_strncpy(char *dest, char *src, int n)
{
	char *res = dest;
	int i = 0;

	while (i < n)
{
		*dest = *src;
		i++;

		if (*src != '\0')
{
			dest++;
			src++;
}
			else
{
				while (i < n)
{
					*dest = '\0';
					dest++;
					i++;
}
}
}
	return (res);
}
