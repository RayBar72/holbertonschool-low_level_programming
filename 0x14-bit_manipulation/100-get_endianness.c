#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 = BE, 1 = LE
 */

int get_endianness(void)
{
	int x = 1;

	return (*(char *)&x);
}
