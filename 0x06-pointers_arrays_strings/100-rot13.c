#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rot13 - function that encodes a string using rot13
 * @s: string
 *
 * Return: String rot 13
 */
char *rot13(char *s)

{
	int i, j;
	char ini[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char fin[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (ini[j] == s[i])
			{
				s[i] = fin[j];
				break;
			}
		}
	}
	return (s);
}
