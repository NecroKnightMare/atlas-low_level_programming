#include <stdio.h>
#include "main.h"
/**
 *get_bit - gets the bit value of an index
 *@n: is a value of a positive number
 *@index: a given number
 *
 *Return: the value of the bit at index index or -1 if an error occured
**/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = (sizeof(n) * 8 - 1);

	if (index > size)
{
		return (-1);
}
	return ((n >> index) & 1);
}
