#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: int var
 * @argv: string
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x = 0, y = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	y = atoi(argv[1]);
	if (y >= 25)
	{
		x = x + y / 25;
		y = y % 25;
	}
	if (y >= 10)
	{
		x = x + y / 10;
		y = y % 10;
	}
	if (y >= 5)
	{
		x = x + y / 5;
		y = y % 5;
	}
	if (y >= 2)
	{
		x = x + y / 2;
		y = y % 2;
	}
	if (y >= 1)
	{
		x = x + y / 1;
	}

	printf("%d\n", x);
	return (0);
}
