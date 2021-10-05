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

	if (x < 0)
	{
		x = -x;
		_putchar(x % 10 + '0');
	}
	else
		_putchar(x % 10 + '0');
	return (0);
}
