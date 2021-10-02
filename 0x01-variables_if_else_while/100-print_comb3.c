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
	int la;
	int lo;
	int count = 0;

	for (la = '0'; la <= '8'; la++)
		for (lo = '0'; lo <= '9'; lo++)
			if (lo > la)
			{

				putchar(la);

				putchar(lo);

				if (la != '8' || lo != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
