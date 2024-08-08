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
	int i = 0;/**basic algor**/

	if (array[i] == value)
{
	i++;
	return (i);
}
	if (i < size)
{
	array[i] = value;
	i++;
	return (i);
}
	else
{
	return (-1);/**read inst on intranet**/
}
