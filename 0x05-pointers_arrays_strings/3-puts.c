#include "main.h"

/**
 * _puts - Function that returns the length of a string.
 * @str: string to be write.
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
