#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if fail, empty if success
**/
char *str_concat(char *s1, char *s2)
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int i = 0;
	char *s3;

	if (s1 == NULL && s2 == NULL)
{
		return (" ");
}
	s3 = (char *)malloc(sizeof(l1) + sizeof(l2) + 1);

	while (s1[i] != '\0')
{
		s3[l1] = s1[i];
		i++;
		l1++;
}
	while (s2[i] != '\0')
{
		s3[l2] = s2[i];
		i++;
		l2++;
}
	return (s3);
}
