#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters
 * @n: variable
 * @...: keeps going
 * Return: 0 if n is 0
**/
int sum_them_all(const unsigned int n, ...)
{
	va_list li;
	int i, sum;

	if (n == 0)
{
		return (0);
}
	va_start(li, n);

	sum = 0;
	for (i = 0; i < (int)n; i++)
{
		sum += va_arg(li, int);
}
	va_end(li);
	return (sum);
}
