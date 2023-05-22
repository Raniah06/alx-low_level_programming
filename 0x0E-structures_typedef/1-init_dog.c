#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct
 * @d: struct dog
 * @name: string
 * @age: integer
 * @owner: string for owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
