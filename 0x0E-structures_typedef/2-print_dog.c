#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints dog
 * @d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(NULL)";
	if (d->owner == NULL)
		d->owner = "(NULL)";
	printf("Name: %s\nAge: %s\nOwner:%s\n", d->name, d->age, d->owner);
}
