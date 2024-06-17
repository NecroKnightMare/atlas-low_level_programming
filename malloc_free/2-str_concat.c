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
	int length = 0;
	char *s3;

	if (s1 == NULL && s2 == NULL)
{
		return (" ");
}
	s3 = (char *)malloc(sizeof(s1) + sizeof(s2) + 1);

	while (s1[i] != '\0')
{
		s3[length] = s1[i];
		i++;
		length++;
}
	while (s2[i] != '\0')
{
		s3[length] = s2[i];
		i++;
		length++;
}
	return (s3);
}
