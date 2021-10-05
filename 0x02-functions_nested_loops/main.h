#include <unistd.h>

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - writes the alphabet
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}

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
