#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_name - function that prints a names
 * @name: pointer to a string
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
