#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: int var
 * @argv: string
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y, z;

	if (argc < 3)
	{
		puts("Error");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;
	(void)argc;

	printf("%d\n", z);

	return (0);
}
