#include <stdio.h>

/**
 * print_to_98 - prints 1 when lowercase, else 0
 * @x: integer to be evaluated
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


void print_to_98(int x)
{
	for (; x <= 97; x++)
		printf("%i, ", x);
	putchar('9');
	putchar('8');
	putchar('\n');
}
