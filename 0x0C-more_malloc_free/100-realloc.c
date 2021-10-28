#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that allocates memory using malloc and free
 * @ptr: original mem created with malloc
 * @old_size: byts
 * @new_size: byts
 * Return: 98 if fails.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *fin, *finre, *ptr1;
	unsigned int i = 0;

	ptr1 = ptr;

	if (!ptr1)
		return (malloc(new_size));

	if (old_size == new_size)
		return (ptr1);

	free(ptr1);

	if (new_size == 0)
		return (NULL);

	fin = finre = malloc(new_size);
	if (!finre)
		return (NULL);

	if (old_size > new_size)
		old_size = new_size;

	while (old_size-- > 0)
		*fin++ = *ptr1++;

	return (finre);
	free(ptr);
}
