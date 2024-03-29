#include "main.h"

/**
 * print_last_digit - prints 1 when lowercase, else 0
 * @x: integer to be evaluated
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int x)
{

	int y = x % 10;

	if (y < 0)
		y *= -1;
	_putchar(y + '0');
	return (y);
}
