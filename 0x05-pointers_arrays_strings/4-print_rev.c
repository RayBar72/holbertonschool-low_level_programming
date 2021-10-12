#include "main.h"

/**
 * print_rev - Function that returns the length of a string.
 * @s: string to be write inverse.
 *
 */

void print_rev(char *s)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (j = count; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
