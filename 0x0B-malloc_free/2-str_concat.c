#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: null if fails, other pointer to the array
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0, j = 0, k = 0, count = 0;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	k = j + i;
	s = (char *)malloc(k + 1);

	if (s == NULL)
		return (NULL);
	if (s1 == NULL)
		return (0);
	if (s2 == NULL)
		return (0);

	for (count = 0; count < i; count++)
		s[count] = s1[count];
	for (count = i, j = 0; count < k; count++, j++)
		s[count] = s2[j];

	return (s);
	free(s);
}
