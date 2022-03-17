#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * @size: size of array
 * @c: char for inic
 * Return: null if fails, other pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);
	unsigned int i = 0;

	if (size <= 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
