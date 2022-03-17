#include "main.h"

/**
 * print_binary - function that prints an int in bin
 * @n: int
 */

void print_binary(unsigned long int n)
{
	unsigned long int x = 0, i = 63, j = 0;

	while (i--)
	{
		x = n >> i;
		if (x & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar ('0');
	}
	if (!j)
		_putchar('0');
}
