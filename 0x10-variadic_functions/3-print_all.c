#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


/**
 * print_all - prints followed by a new line.
 * @format: string with the format
 */

void print_all(const char * const format, ...)
{
	va_list imp;
	int i = 0, j = strlen(format);
	char *s;

	va_start(imp, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(imp, int));
				break;

			case 'i':
				printf("%i", va_arg(imp, int));
				break;

			case 'f':
				printf("%f", va_arg(imp, double));
				break;

			case 's':
				s = va_arg(imp, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		if (i < j - 1)
			printf(", ");
		i++;
	}
	va_end(imp);
	printf("\n");
}
