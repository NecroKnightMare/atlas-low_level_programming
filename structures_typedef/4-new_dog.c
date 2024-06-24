#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create new dog
 * @name: new name
 * @age: age of dog
 * @owner: different owner
 * Return: NULL if fail
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NewDog = malloc(sizeof(dog_t));
	if (!NewDog)
{
		return (NULL);
}
	NewDog->name = name;
	if (!NewDog->name)
{
		free(NewDog);
		return (NULL);
}
	NewDog->age = age;
	NewDog->owner = owner;
	if(!NewDog->owner)
{
		free(NewDog->owner);
		free(NewDog);
		return(NULL);
}
	return(NewDog);
}
