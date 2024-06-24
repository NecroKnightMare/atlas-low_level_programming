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
	va_list arg;
	int i;
	int num;;

	va_start(arg, n);
	for (i = 0; i < (int)n; i++)
{
		num = va_arg(arg, int);
		printf("%d", num);
		if (separator != NULL && i < (int)n - 1)
{
			printf("%s", separator);
}
}
	printf("\n");
	va_end(arg);
}
