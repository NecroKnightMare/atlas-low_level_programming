#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *op_add
 *@a: num1
 *@b: num2
 *Return: sum
**/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract
 * @a: num1
 * @b: num2
 * Return: difference
**/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply
 * @a: num1
 * @b: num2
 * Return: product
**/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide
 * @a: num1
 * @b: num2
 * Return: quotient
**/
int op_div(int a, int b)
{
	if (a == 0)
{
		printf("Error\n");
		exit(100);
}
	return (a / b);
}
/**
 * op_mod - modulos
 * @a: num1
 * @b: num2
 * Return: remainder
**/
int op_mod(int a, int b)
{
	if (a == 0)
{
		printf("Error\n");
		exit(100);
}
	return (a % b);
}
