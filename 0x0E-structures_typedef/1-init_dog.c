#include "dog.h"

/**
 * init_dog - This initializes a dog
 * @d: points a dog
 * @name: names a dog
 * @age: age of a dog
 * @owner: names dog owner
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
