#include "main.h"

/**
 * jack_bauer - prints 1 when lowercase, else 0
 * integer to be evaluated
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
{
	int h2;
	int h1;
	int m2;
	int m1;

	for (h2 = '0'; h2 <= '2'; h2++)
		for (h1 = '0'; h1 <= '9'; h1++)
			for (m2 = '0'; m2 <= '5'; m2++)
				for (m1 = '0'; m1 <= '9'; m1++)
					if (h2 != '2' || h1 <= '3')
					{
						_putchar(h2);
						_putchar(h1);
						_putchar(':');
						_putchar(m2);
						_putchar(m1);
						_putchar('\n');
					}
}
