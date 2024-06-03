#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print 2 diagonals of a square matrix of int
 * @a: pointer
 * @size: rows
 * Return: 0
**/
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size)
{
		i++;
		sum1 += a[(size + 1) * i]; 
		sum2 += a[(size - 1) * (i + 1)];
}
		printf("%d\n%d\n", sum1, sum2);
}
