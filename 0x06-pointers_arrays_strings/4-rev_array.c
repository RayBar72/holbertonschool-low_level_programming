#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of int
 * @n: the number of int that are going to swap
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0, x = 0;

	for (i = 0; i < (n / 2); i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
