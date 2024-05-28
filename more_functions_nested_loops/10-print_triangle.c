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

	if (size > 0)
{
		_putchar('\n');
}
		for (i = 1; i <= size; i++)
{
			for (j = size; j < i; j++)
{
				_putchar('#');
}
				if (i == j)
					continue;
}
			_putchar('\n');
}
