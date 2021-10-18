#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - number of bytes in the initial segment of s
 *
 * @a: the string
 * @size: the size of sting
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * (size + 1)];
		d2 += a[size - 1 + i * (size - 1)];
	}
	printf("%d, %d\n", d1, d2);
}
