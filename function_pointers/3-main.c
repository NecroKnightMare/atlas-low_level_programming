#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - entry point
 *@argc: argument
 *@argv: array
 *Return: 99/98 if not, 0 if success
**/
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
{
		printf("Error\n");
		exit(98);
}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(num1, num2));
	if (!argv)
{
	printf("Error\n");
	exit(99);
}
	return (0);
}
