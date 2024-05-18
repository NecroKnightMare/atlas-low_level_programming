#include <stdlib.h>
#include <time.h>
/**
 * main - void
 * @: no parameters
 *
 * Return: Always Success (0)
*/

int main(void)
{
	srand(time(0));
	int n = rand() - RAND_MAX / 2;
	if (n > 0)
{
		printf ("is positive\n")
}	
	else if (n == 0)
{
		printf ("is zero\n")
{
	else (n < 0)
{
		printf ("is negative\n")
}
	return (0);
}
