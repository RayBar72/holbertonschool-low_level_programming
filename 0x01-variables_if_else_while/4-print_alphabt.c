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
	char la;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch == 'e')
			la = ch;
		else if (ch == 'q')
			la = ch;
		else
			putchar (ch);
	putchar('\n');
	return (0);
}
