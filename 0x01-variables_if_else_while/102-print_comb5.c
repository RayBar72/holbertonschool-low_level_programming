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

	int r;
	int x;
	int y;
	int z;
	int a = r + (10 * x);
	int b = y + (10 * z);

	for (r = '0'; r <= '9'; r++)
		for (x = '0'; x <= '9'; x++)
			for (y = '0'; y <= '9'; y++)
				for (z = '0'; z <= '9'; z++)
				{
				a = x + (10 * r);
				b = z + (10 * y);
				if (a < b)
				{
				putchar (r);
				putchar (x);
				putchar (' ');
				putchar (y);
				putchar (z);
				if (r != 9 || x != 8 || y != 9
				|| z != 9)
				{
				putchar (',');
				putchar (' ');
				}
				}
				}
				putchar ('\n');
	return (0);
}
