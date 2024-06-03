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

        while (n > *a)
{
                temp = n;
                n = *a;
                *a = temp;
                a++;
                n--;
}
}
