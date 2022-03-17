#include "main.h"

/**
 * swap_int - function that swaps the values of two integer
 * @a: variable one.
 * @b: variable two.
 * Not retourn because a void function
 */

void swap_int(int *a, int *b)
{
	int  temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
