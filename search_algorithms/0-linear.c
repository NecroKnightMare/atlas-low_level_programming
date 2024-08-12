#include "search_algos.h"
/**
 *linear_search - search alg that is a constant
 *@array: array
 *@value: value of output
 *@size: size of array
 *Return: -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;/**basic algor**/

	if (array == NULL)
{
		return (-1);
}
	while (i < size)
{
		i++;
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
{
			return (i);
}
}
	return (-1);/**read inst on intranet**/

}
