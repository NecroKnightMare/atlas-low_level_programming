#include "variadic_functions.h"
#include <stdarg.h>
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
	for (i = 0; i < (int)n; i++)
{
		printf("%d", va_arg(num(num, n);
}
	if (i != NULL)
{
			printf("%s", seperator);
}
		printf('\n');
}
	va_end(num);
}
