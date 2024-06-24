#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - print strings followed by new line
 * @separator: string printed between strings
 * @n: number of strings
 * Return: void
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list str;
        int i;
        char *string;

        va_start(str, n);
        for (i = 0; i < (int)n; i++)
{
                string = va_arg(str, char *);
		if (string == NULL)
{
		printf("(nil)");
}
			else
{
			printf("%s", string);
}
                if (separator != NULL && i != ((int)n - 1))
{
                        printf("%s", separator);
}
}
	printf("\n");
        va_end(str);
}
