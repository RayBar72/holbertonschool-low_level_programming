#include "main.h"
/**
 * _r2 - function that returns the natural square root of a number
 * @n: number to be evaluated
 * @r2: root
 *
 * Return: -1 if no exact or not posible, else the root2
 */

int _r2(int n, int r2)
{
	int np = r2 * r2;

	if (n < 0)
		return (-1);
	if (n >= 0 && np < n)
		return (_r2(n, r2 + 1));

	else
		if (np == n)
			return (r2);
		else
			return (-1);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to be evaluated
 *
 * Return: equals to zero.
 */

int _sqrt_recursion(int n)
{

	return (_r2(n, 0));
	return (0);
}
