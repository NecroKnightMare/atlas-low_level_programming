#include "main.h"

/**
 * swap_int - swap values
 * @a: first value
 * @b: second value
 * Return: void 1
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
