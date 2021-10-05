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

	_putchar('0' + x % 10);
	return (0);
}
