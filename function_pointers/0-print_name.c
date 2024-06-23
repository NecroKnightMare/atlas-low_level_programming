#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - write function that prints name
 * @name: name of function
 * @f: ...
 * @*: ...
 * Return: void
**/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
{
		printf("%p", name);
		f(name);
}
}
