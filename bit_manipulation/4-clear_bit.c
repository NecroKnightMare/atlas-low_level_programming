#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 *
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
