#include "main.h"

/**
 * print_line - writes the character c to stdout
 * @n: number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_line(int n)
{

	int z;

	if (n > 0)
		for (z = 1; z <= n; ++z)
			_putchar('_');
	_putchar('\n');

}
