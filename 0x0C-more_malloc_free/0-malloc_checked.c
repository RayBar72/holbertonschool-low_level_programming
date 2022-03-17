#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - function that allocates memory
 * @b: unsigned int. Memory to be allocated
 * Return: 98 if fails.
 */

void *malloc_checked(unsigned int b)
{

	void *asig = malloc(b);

	if (!asig)
		exit(98);

	return (asig);
}
