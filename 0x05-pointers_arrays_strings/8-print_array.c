#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the second half of the string
 * @a: array of int.
 * @n: number of elements of array to be printes
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n == 0)
	{
		printf("%d\n", a[0]);
	}
	if (n > 1)
	{
		while (i < n && n >= 1)
		{
			printf("%d", a[i]);
			if (i == (n - 1))
				printf("\n");
			else
				printf(", ");
			i++;
		}
	}
}
