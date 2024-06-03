#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: variable
 * Return: void 1
**/
void reverse_array(int *a, int n)
{	
	int temp, i;

	for (i = 0; 1 < n / 2; i++)
{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
}
}
