#include "main.h"

/**
 * print_triangle - print a triangle with #
 * @size: size of triangle
 * Return: 1 void
*/

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
{
		for (i = 0; i < size; i++)
{
			for (j = size; j > 1; j--)
{
				_putchar(' ');
}
				for (k = 1; k <= i; k++)
					_putchar('#');
}
		_putchar('\n');
}
}
