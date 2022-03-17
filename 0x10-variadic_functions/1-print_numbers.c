#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list imp;
	unsigned int i = 0;

	va_start(imp, n);

	for ( ; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(imp, int));
		else
		{
			printf("%d", va_arg(imp, int));
			if (i != n - 1)
				printf("%s", separator);
		}
	}

	va_end(imp);
	printf("\n");
}
