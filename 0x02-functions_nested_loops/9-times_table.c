#include "main.h"

/**
 * times_table - prints 1 when lowercase, else 0
 * integer to be evaluated
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void times_table(void)
{
	int x;
	int y;
	int z;
	int a;
	int b;


	for (x = 0; x <= 9; x++)
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			a = z % 10;
			b = z / 10;
			if (y != 0)
			{
				if (y == 9)
				{
					_putchar(',');
					_putchar(' ');
					if (z <= 9)
						_putchar(' ');
				}
				if (y != 9 && y > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (z <= 9)
						_putchar(' ');
				}
			}
			if (z <= 9)
				_putchar(a + '0');
			if (z > 9)
			{
				_putchar(b + '0');
				_putchar(a + '0');
			}
			if (y == 9)
				_putchar('\n');
		}
}
