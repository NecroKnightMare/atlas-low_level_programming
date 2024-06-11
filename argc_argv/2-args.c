#include "main.h"
#include <stdio.h>
/**
 *main - size of argc
 *@argc: array size
 *@argv: array with arguments
 *Return: 0
**/
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
{
		printf("%s\n", argv[i]);
		i++;
}
	return (0);
}
