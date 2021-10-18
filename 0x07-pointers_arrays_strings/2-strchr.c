#include "main.h"

/**
 * _strchr - pointer to the first occurrence of the character c in the string s
 * @s: string to be evaluated
 * @c: character to be searched
 *
 *
 * Return: pointer to dest.
 */

char *_strchr(char *s, char c)
{

	int i = 0, len = 0, j = 0;
	char *a;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = 0; i < len && s[i] != c; i++)
	{
	}

	if (s[i] == c && j == 0)
		a = s + i;
	else
		a = '\0';
	return (a);
}
