#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number for factorial
 *
 * Return: -1 if error, 1 if zero and other factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
	return (0);
}
