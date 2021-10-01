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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch == 'e')
			ch = ch;
		else if (ch == 'q')
			ch = ch;
		else
			putchar (ch);
	putchar('\n');
	return (0);
}
