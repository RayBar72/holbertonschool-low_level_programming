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
	int la;
	char great[] = "and is greater than 5";
	char menos[] = "and is less than 6 and not 0";
	char cero[] = "and is 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	la = n % 10;

	if (n > 0)
		if (la >= 6)
			printf("Last digit of %i is %i %s\n", n, la, great);
		else
			printf("Last digit of %i is %i %s\n", n, la, menos);
	else
		if (la = 0)
			printf("Last digit of %i is %i %s\n", n, la, cero);
		else
			printf("Last digit of %i is %i %s\n", n, la, menos);
	return (0);

}
