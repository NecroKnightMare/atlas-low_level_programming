#include <stdio.h>
#include "main.h"
/**
 *set_bit - set bit to 1
 *@n: value
 *@index: given index
 *Returns: 1 if it worked, or -1 if an error occurred
**/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;
	unsigned int m;/**seen mask syntax in research will use m for short**/

	size = (sizeof(n) * 8 - 1);/**copied again from file 1**/

	if (index > size)/**same parameters as long as index is more than size**/
{
		return (-1);
}
	m = 1 << index;/**sets mask to one at the given index**/

	*n = *n| m;/**new value of pointer**/

	return (1);
}
