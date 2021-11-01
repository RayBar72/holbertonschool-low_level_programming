#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dog -  function that prints a struct
 * @d:pointer to dog
 */

void print_dog(struct dog *d)
{


	if (!d)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", dog->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", dog->owner);
}
