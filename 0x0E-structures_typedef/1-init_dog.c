#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initializes struct dog
 * @d: pointer to type dog struct
 * @name: dog name to set
 * @age: dog age to set
 * @owner: dog owner to set
 */
void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
