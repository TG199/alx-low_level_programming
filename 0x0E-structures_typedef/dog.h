#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;
/**
 * struct dog - create struct
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Create struct variable
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
