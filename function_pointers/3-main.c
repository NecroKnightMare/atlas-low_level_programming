#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
**/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *sign;

	if (argc != 4)
{
		printf("Error\n");
		exit(98);
}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = argv[2];

	if (!sign)
{
		printf("Error\n");
		exit(99);
}
	printf("%d\n", get_op_func(sign)(num1, num2));

	return (0);
}
