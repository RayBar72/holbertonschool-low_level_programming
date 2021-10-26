#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string which is a
 * duplicate of the string
 * @str: string to be copied
 *
 * Return: null if fails, other pointer to the array
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0, j = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	s = (char *)malloc(i);

	if (s == NULL || str == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		s[j] = str[j];

	return (s);
	free(s);
}
