#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * int_index - function that searches for an int
 * @array: array of chars
 * @size: array lenght
 * @cmp: pointer to a function
 * Return: index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]) == 1)
			return (i);
	return (-1);
}
