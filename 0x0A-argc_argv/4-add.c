#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num - program that adds numbers
 * @x: string
 * Return: string to number
 */

int num(char *x)
{
	int a = 0, i = 0;

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= '0' && x[i] <= '9')
			a = a * 10 + (x[i] - '0');
		else
			return (-1);
	}
	return (a);
}

/**
 * main - program that adds numbers
 * @argc: int var
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, i, y = 0;

	for (i = 1; i < argc; i++)
	{
		x = num(argv[i]);
		if (x < 0)
		{
			puts("Error");
			return (1);
		}

		y += x;
	}
	printf("%d\n", y);

	return (0);
}
