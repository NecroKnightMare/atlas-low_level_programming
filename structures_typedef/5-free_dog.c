#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frre dog struct memory
 * @d: dog
 * Return: nothing
**/
void free_dog(dog_t *d)
{
	if (d != NULL)
{
	free(d);
	free(d->name);
	free(d->owner);
	free(d->age);
}
}
