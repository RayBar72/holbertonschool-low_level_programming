#include "main.h"

/**
 * int _islower(int c) - prints 1 when lowercase, else 0
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int x)
{

	if (x >= 'a' && x <= 'z')
		_putchar('1');
	else
		_putchar('0');
	return (0);
}
