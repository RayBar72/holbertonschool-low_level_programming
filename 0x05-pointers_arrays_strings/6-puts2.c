#include "main.h"

/**
 * puts2 - Function that prints every other character of a string
 * @str: String to be printed
 */

void puts2(char *str)
{
	int i = 0, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	count--;
	i = 0;
	while (i <= count)
	{
		_putchar(10);
		i = i + 2;
	}
	_putchar (10);

}
