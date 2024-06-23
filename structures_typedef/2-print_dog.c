#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * print_dog - print struct
 * @d: dog
 * Return: string
**/
void print_dog(struct dog *d)
{
	if (d == NULL)
{
}
	if (d->name == NULL)
{
		printf("Name: (nil)\n");
}
	if (d->age == 0)
{
		printf("Name: (nil)\n");
}
	if (d->owner == NULL)
{
		printf("Name: (nil)\n");
}
	if (d != NULL)
{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
}
}
