#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * p_null_notnull -  function that prints a mensaje if null
 * @v: var
 * @f: format
 */

void p_null_notnull(char *f, char *v)
{
	if (f)
		printf(f, v);
	else
		printf(f, "(nil)");
}

/**
 * print_dog -  function that prints a struct
 * @d:pointer to dog
 */

void print_dog(struct dog *d)
{

	char s2[] = "(nil)";

	if (!d)
		printf("%s\n", s2);
	p_null_notnull("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	p_null_notnull("Owner: %s\n", d->owner);
}
