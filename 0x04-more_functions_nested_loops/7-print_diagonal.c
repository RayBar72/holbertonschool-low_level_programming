#include "main.h"

/**
 * print_diagonal - writes the character c to stdout
 *@n: number or lines.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{

	int m;
	int o;

	if (n < 0)
		n = 0;

	if (n == 0)
		_putchar('\n');

	if (n >= 1)
	{
		for (o = 1; o <= n; ++o)
		{
			for (m = 2; m <= o; ++m)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
