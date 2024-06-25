#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *
 *
 *
 *
 *
**/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	int i, len;

	len = sizeof(ops)/sizeof(op_t);

	i = 0;

	while (i < len)
{
		if (s == 0)
{
			return (ops[i].f);
			i++;
}
}
	return (0);
}
