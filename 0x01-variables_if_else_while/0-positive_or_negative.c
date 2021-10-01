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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n >= 0)
		if (n == 0)
			printf("%i is zero\n", n);
		else
			printf("is positive %i\n", n);
	else
		printf("is negative %i\n", n);
	return (0);
}
