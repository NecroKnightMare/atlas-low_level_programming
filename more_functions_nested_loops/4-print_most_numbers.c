#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - 0-9 not 2 or 4 
 * @: no parameters
 * Return: 1 void
*/

void print_most_numbers(void)
{
	int i;
	for (i = 0; i <=9; i++)
{
		if (i == 2 || i == 4)
{
				continue;
}
	printf("%d\n", i);
}
}
