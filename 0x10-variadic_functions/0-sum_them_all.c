#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: const unsigned int n
 * Return: zero int n == 0, the value of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list adicion;
	unsigned int i = 0, suma = 0;

	va_start(adicion, n);

	for ( ; i < n; i++)
	{
		suma += va_arg(adicion, unsigned int);
	}

	va_end(adicion);
	return ((n != 0) ? (suma) : (0));
}
