#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defining dog as a structure for main file
 *@name: name of dog
 *@age: age of dog
 *@owner: owners name
 * description: defining dog characteristics
**/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * putting prototypes here to avoid type/function conflicts
**/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
