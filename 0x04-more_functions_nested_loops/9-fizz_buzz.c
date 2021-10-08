#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Alway 0 (Success)
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
	printf("Buzz\n");
	return (0);
}
