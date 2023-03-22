#include "dog.h"

/**
 * init_dog - Initialize variable
 * @d: passed function
 * @name:first member
 * @age:second member
 * @owner:Third member
 *
 * Description:This function intializes a struct variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
