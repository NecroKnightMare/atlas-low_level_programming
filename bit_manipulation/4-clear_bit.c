#include <stdio.h>
#include "main.h"
/**
 *clear_bit - clear bits to use mask for int
 *@n: pointer of value
 *@index: use of index
 *Return: 1 if it worked, or -1 if an error occurred
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;
	unsigned mask;

	size = (sizeof(n) * 8 - 1);

	if (index > size)
{
		return (-1);
}
	mask = 1 << index;/**sets mask to one at the given index**/
	
	*n = *n & ~mask;/**The ~ (bitwise NOT) in C takes one number and inverts all bits of it.**/

	return (1);
}
