#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to number to be chaged
 * @index: bit
 * Return: -1 if an error occured, 1 if success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
