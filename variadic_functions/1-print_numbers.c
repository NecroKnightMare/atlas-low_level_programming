#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print numb followed by new line
 * @seperator: string printed between numbers
 * @n: number of integers
 * Return: void
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list num;

	va_start(num, n);
	if (n > 0)
{
		printf("%d", va_arg(num, n);
}
	for (i = 0; i < (int)n; i++)
{
		printf("%d", va_arg(num, n);
}
	if (seperator != NULL && n > 1)
{
			printf("%s", seperator);
}

	printf('\n');
	va_end(num);
}
