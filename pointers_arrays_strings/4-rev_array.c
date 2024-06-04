#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: variable
 * Return: void 1
**/
void reverse_array(int *a, int n)
{
        int temp;
	int i = 0;

        while (i <= n)
{
                temp = a[n];
                n = i;
                i = temp;
                a++;
                n--;
}
}
