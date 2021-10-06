#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0; /* i is setted less than 0

	while (i < 10) /* There is not ++i */
	{
		putchar(i); /* There is not ++i */
	}

	printf("Infinite loop avoided! \\o/\n"); /* Becasuse i printed inf */

	return (0);
}
