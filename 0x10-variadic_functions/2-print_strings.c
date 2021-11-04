#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of numbers to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list imp;
	unsigned int i = 0;

	va_start(imp, n);

	for ( ; i < n; i++)
	{
		if (!separator)
		{
			if (!va_arg(imp, char *))
				printf("nil");
			else
				printf("%s", va_arg(imp, char *));
		}
		else
		{
			printf("%s", va_arg(imp, char *));
			if (i < n - 1)
				printf("%s", separator);
		}
	}

	va_end(imp);
	printf("\n");
}
