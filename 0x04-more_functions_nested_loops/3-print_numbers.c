#include "main.h"

/**
 * print_numbers - writes the character c to stdout
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
		_putchar(x);
		_putchar('\n');
}
