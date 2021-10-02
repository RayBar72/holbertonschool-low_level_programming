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
	int pu;

	for (la = '0'; la <= '7'; la++)
		for (lo = '0'; lo <= '9'; lo++)
			for (pu = '0'; pu <= '9'; pu++)
				if (lo > la && pu > lo)
				{
					putchar(la);
					putchar(lo);
					putchar(pu);
					if (la != '7' || lo != '8' || pu != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
	putchar('\n');
	return (0);
}
