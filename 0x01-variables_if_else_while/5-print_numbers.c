#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 *Return: Alway 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
		printf("%i", ch);
	putchar('\n');
	return (0);
}
