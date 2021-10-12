#include "main.h"

/**
 * puts_half - Prints the second half of the string
 * @str: string.
 */

void puts_half(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	if (count % 2 == 0)
		for (i = (count / 2); i < count; i++)
			_putchar(str[i]);
	if (count % 2 != 0)
		for (i = ((count + 1) / 2); i < count; i++)
			_putchar(str[i]);
	_putchar('\n');
}
