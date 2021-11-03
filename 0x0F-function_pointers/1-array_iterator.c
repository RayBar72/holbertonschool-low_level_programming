#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_iterator - function that prints a names
 * @array: array of chars
 * @size: array lenght
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
