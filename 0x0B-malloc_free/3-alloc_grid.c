#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * vertical - concatenates two strings
 * @vert: size on verticla
 *
 *
 * Return: null if fails, other pointer to the array
 */

int *vertical(int vert)
{
	int i = 0;
	int *x;

	x = malloc(vert * sizeof(int));

	for (i = 0; i < vert; i++)
		x[i] = 0;

	return (x);
}

/**
 * alloc_grid - concatenates two strings
 * @width: size horizontal
 * @height: size vertical
 *
 * Return: null if fails, other pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int **x;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = (int **)malloc(width * sizeof(int *));
	if (x == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		x[i] = vertical(width);
		if(x == NULL)
		{
			while (i > 0)
				free(x[--1]);
			free(x);
			return (NULL);
		}
	}
	return (x);
}
