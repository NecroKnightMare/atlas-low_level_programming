#include "function_pointers.h"
#include <stdio.h>
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
		f(name);
}
}
