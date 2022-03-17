#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory
 * @nmemb: unsigned int. Memory to be allocated
 * @size: unsigned int. Memory to be allocated
 * Return: 98 if fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int bytes = 0, i = 0;
	char *memo;

	bytes = nmemb * size;
	if (bytes == 0)
		return (NULL);

	memo = malloc(bytes);
	if (!memo)
		return (NULL);

	for (i = 0; i < bytes; i++)
		memo[i] = 0;

	return (memo);
}
