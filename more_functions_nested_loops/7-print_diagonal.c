#include "main.h"

/**
 * print_diagonal - print slashes
 * @n: character
 * Return: 1 void
*/

void print_diagonal(int n)
{
        if (n <= 0)
{
                _putchar('\n');
}
        else
{
		int i;

		for (i = 0; i < n; i++)
{
                        _putchar('_');
}
                _putchar('\n');
}
}
