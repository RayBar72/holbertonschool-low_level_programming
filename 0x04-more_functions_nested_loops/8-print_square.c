#include "main.h"

/**
 * print_diagonal - writes the character c to stdout
 *@size: logitud of one side of the square.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_square(int size)
{
	int o;
	int p;

	if (size < 0)
		size = 0;

	if (size == 0)
		_putchar('\n');

	if (size >= 1)
	{
		for (o = 1; o <= size; o++)
		{
			for (p = 1; p <= size; p++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
