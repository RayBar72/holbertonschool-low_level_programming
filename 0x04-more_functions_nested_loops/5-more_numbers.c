#include "main.h"

/**
 * more_numbers - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void more_numbers(void)
{
	int x;
	int y;
	int a;
	int b;

	for (y = 1; y <= 10; y++)
		for (x = 0; x <= 14; x++)
		{
			a = x / 10;
			b = x % 10;
			if (x >= 10)
				_putchar(a + '0');
			_putchar(b+ '0');
			if (y == 10)
				_putchar(b + '0');
		}
}
