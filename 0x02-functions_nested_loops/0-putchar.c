#include "main.h"

/**
 * main - Entry point
 *
 *Return: Alway 0 (Success)
 */
int main(void)
{
	char  x[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 8; i++)
		_putchar (x[i]);
	_putchar ('\n');
	return (0);
}
