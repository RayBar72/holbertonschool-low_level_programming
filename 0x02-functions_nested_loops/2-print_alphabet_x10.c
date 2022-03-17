#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabet ten times
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
	_putchar('\n');
	}
}
