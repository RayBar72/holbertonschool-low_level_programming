#include "main.h"

/**
 * puts2 - Function that prints every other character of a string
 * @str: String to be printed
 */

void puts2(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	if (count == 0)
		_putchar("");
	i = 0;
	do {
		_putchar(*(str + i));
		i = i + 2;
	}
			while (i < count);
	_putchar('\n');

}
