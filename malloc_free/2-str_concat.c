#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if fail, empty if success
**/
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *s3;

	if (s1 == NULL && s2 == NULL)
{
		return (" ");
}
	s3 = malloc((sizeof(s1) + sizeof(s2)) * sizeof(char) + 1);

	while (s1[i] != '\0')
{
		s3[j] = s1[i];
		i++;
		j++;
}
	while (s2[i] != '\0')
{
		s3[j] = s2[i];
		i++;
		j++;
}
/**	s3 = malloc((sizeof(s1) + sizeof(s2)) * sizeof(char) + 1);**/
	return (s3);
}
