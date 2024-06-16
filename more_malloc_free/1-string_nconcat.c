#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: if empty or fails, NULL; pointer if success
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;
	char *s;

	if (s1 == NULL && s2 == NULL)
{
		return(NULL);
}
	if (s1[i])
{
		i++;
}
	if (s2[j])
{
		j++;
}
	if (n <= j)
{
		len = i + j;
}
	s = malloc(sizeof(char) * len + 1);
	
	if (s == NULL)
{
		return(NULL);
}
	return(s);
}
