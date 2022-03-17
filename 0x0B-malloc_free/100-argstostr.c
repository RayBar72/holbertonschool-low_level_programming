#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * larg - counts the lenght of the string
 * @s: pointer to string
 * Return: the lenght
 */

int larg(char *s)
{
	int i = 0;

	if (s)
		for ( ; s[i] != '\0'; i++)
			;
	i = i;
	return (i);
}

/**
 * scopy - copy one string in other
 * @s1: destini
 * @s2: inic
 * Return: string
 */

char *scopy(char *s1, char *s2)
{
	if (!s2)
		return (s1);
	while (*s2)
		*s1++ = *s2++;
	return (s1);
}

/**
 * argstostr - cocatenates the args of function
 * @ac: int
 * @av: string
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, lon = 0;
	char *sfin, *fin;

	if (ac <= 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		lon = lon + larg(av[i]) + 1;
	}

	fin = malloc(lon + 1);
	if (!fin)
		return (NULL);

	sfin = fin;
	for (i = 0; i < ac; i++)
	{
		sfin = scopy(sfin, av[i]);
		*sfin++ = '\n';
	}
	*sfin = '\0';
	return (fin);
}
