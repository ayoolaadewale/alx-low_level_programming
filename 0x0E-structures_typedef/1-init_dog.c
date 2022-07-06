#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - entry point
 *@d: arg one
 *@name: arg two
 *@age: arg three
 *@owner: arg three
 *Return: zero
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
