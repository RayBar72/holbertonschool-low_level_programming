#include "main.h"

/**
 * flip_bits - number of bit to go from one numbert to other
 * @n: long int
 * @m: long int
 * Return: number of bites, -1 fault
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cuenta = 0;

	while (n || m)
	{
		cuenta += (n ^ m) & 1;
		n >>= 1;
		m >>= 1;
	}
	return (cuenta);
}
