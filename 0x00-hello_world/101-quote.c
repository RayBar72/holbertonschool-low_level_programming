#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Alway 0 (Success)
 */
int main(void)
{

	int x[] = {'a', 'n', 'd', ' ', 't', 'h', 'a', 't', ' ', 'p', 'i'
			  , 'c', 'e', ' ', 'o', 'f', ' ', 'a', 'r', 't', ' '
			  , 'i', 's', ' ', 'u', 's', 'e', 'f', 'u', 'l', '\"'
			  , '-', ' ', 'D', 'o', 'r', 'a', ' ', 'K', 'o', 'r'
			  , 'p', 'a', 'r', ',', ' ', '2', '0', '1', '5', '-'
			  , '1', '0', '-', '1', '9'};
	int i;

	for (i = 0; i <= 58; i++)
		putchar (x[i]);
	putchar ('\n');
	return (1);
}
