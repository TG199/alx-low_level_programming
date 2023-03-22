#ifndef DOG_H
#define DOG_H


#include "dog.h"

/**
 * struct dog - Initialize variable
 * @name:first member
 * @age:second member
 * @owner:Third member
 *
 * Description:This function intializes a struct variable
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
#endif
