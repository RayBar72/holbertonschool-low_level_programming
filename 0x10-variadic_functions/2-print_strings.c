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
	unsigned int i;
	char *s1;

	va_start(imp, n);

	for (i = 0; i < n; i++)
	{
		if (i && separator)
			printf("%s", separator);
		s1 = va_arg(imp, char*);
		if (s1)
			printf("%s", s1);
		else
			printf("(nil)");
	}

	va_end(imp);
	printf("\n");
}
