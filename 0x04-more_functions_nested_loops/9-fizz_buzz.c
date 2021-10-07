#include <stdio.h>

/**
 * main - FizBuz
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{

	int y;

	for (y = 1; y <= 99; y++)
	{
		if (y % 3 == 0 && y % 5 == 0)
			printf("FizzBuzz ");
		if (y % 3 == 0)
			printf("Fizz ");
		if (y % 5 == 0)
			printf("Buzz ");
		if (y % 3 != 0 && y % 5 != 0)
			printf("%d ", y);
	}
	printf("Buzz'\n'");
	return (0);
}
