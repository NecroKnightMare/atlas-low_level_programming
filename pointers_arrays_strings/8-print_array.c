#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - arrays
 * @a: integer
 * @n: elements
 * Return: void 1
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
{
		printf("%d, ", a[i]);
}
		if (i == (n - 1))
{
			printf("%d", a[n - 1]);
}
	putchar('\n');
}
