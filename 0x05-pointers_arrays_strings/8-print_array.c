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

	n--;
	while (i <= n)
	{
		printf("%d", a[i]);
		if (i != n && n >= 0)
			printf(", ");
		i++;
	}
	putchar (10);
}
