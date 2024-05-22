#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - void
 * @: no parameters
 * Return: Always 0
**/

int main(void)
{
        int n;
        int l;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        l = n % 10;

        if (l > 5)
{
                printf("Last digit of %d is %d and is greater than 5", n, l);
} 
	 else if (l < 6 && l != 0)
{
		printf("Last digit of %d is %d and is less than 6 and not zero", n, l);
}
	else  (l = 0);
{
		printf("Last digit of %d is %d and is 0", n, l);
}
	putchar('\n');
        return (0);
}
