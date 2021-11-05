#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * sep - function tha puts a space and a com
 * @c: int
 */

void sep(int c)
{
	if (c)
		printf(", ");
}



/**
 * print_all - prints followed by a new line.
 * @format: string with the format
 */

void print_all(const char * const format, ...)
{
	va_list imp;
	int i = 0, c = 0;
	char *s;

	va_start(imp, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				sep(c);
				printf("%c", va_arg(imp, int));
				c = 1;
				break;

			case 'i':
				sep(c);
				printf("%i", va_arg(imp, int));
				c = 1;
				break;

			case 'f':
				sep(c);
				printf("%f", va_arg(imp, double));
				c = 1;
				break;

			case 's':
				sep(c);
				s = va_arg(imp, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				c = 1;
				break;
		}
		i++;
	}
	va_end(imp);
	printf("\n");
}
