#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max vaule
 * Return: array
 */

int *array_range(int min, int max)
{

	int bytes = 0;
	int *memo, *paco;

	if (min > max)
		return (NULL);

	bytes = 1 + max - min;
	memo = paco = malloc(bytes * sizeof(int));
	if (!memo)
		return (NULL);

	for (; min <= max; min++)
		*memo++ = min;

	return (paco);
}
