#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * larg - counts the lenght of the string
 * @s: pointer to string
 * Return: the lenght
 */

int larg(char *s)
{
	int i = 0;

	if (!s)
		return (NULL);

	for ( ; s[i]; i++)
			;
	return (i);
}

/**
 * scopy - copy one string in other
 * @s1: destini
 * @s2: inic
 * @n: character of s2 to be coppied
 * Return: string
 */

char *scopy(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*s1++ = *s2++;
		i++;
	}
	return (s1);
}



/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of chr to be concat
 * Return: the string or null.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int ls = 0, ls1 = 0, ls2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ls1 = larg(s1);
	ls2 = larg(s2);
	ls = ls1 + ls2 + 1;
	if (n < ls2)
		ls2 = n;

	s = malloc(ls);
	if (!s)
		return (NULL);

	scopy(s, s1, ls1);
	scopy(s + ls1, s2, ls2);
	s[ls1 + ls2] = '\0';
	return (s);

}
