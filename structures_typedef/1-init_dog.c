#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize dog struct
 *@d: dog
 *@name: name of dog
 *@age: dog age
 *@owner: owner of dog
 *Return: dog
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d!= NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
