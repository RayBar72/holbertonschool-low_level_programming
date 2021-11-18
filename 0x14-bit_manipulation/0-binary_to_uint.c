#include "main.h"

/**
 * binary_to_uint - function that converts a binary to an int
 * @b: pointer to string
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
		return (0);

	for ( ; *b; b++)
	{
		res <<= 1;
		if (*b == '1')
			res |= 1;
		else if (*b != '0')
			return (0);
	}
	return (res);
}
