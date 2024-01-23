#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog info
 * @d: ponter of type struct dog
 */

void	print_dog(struct dog *d)
{
	if (!d)
		return;
	d->name ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	d->age >= 0 ? printf("Age: %6f\n", d->age) : printf("Age: (nil)\n");
	d->owner ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");

}
